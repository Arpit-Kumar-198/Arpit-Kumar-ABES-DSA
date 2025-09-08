#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

int applyOp(int a, int b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '%': return a % b;
        case '^': return pow(a, b);
        default: return 0;
    }
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/' || op == '%') return 2;
    if (op == '^') return 3;
    return 0;
}

bool isOperator(char ch) {
    return precedence(ch) > 0;
}

int evaluateInfix(string expr) {
    stack<int> values;
    stack<char> ops;

    int num = 0;
   

    for (int i = 0; i < expr.size(); i++) {
        char ch = expr[i];

        if (ch == ' ') {
            continue;
        }

        if (isdigit(ch)) {
            while(i < expr.size() && expr[i]!=' '){
                num = num * 10 + (ch - '0');
                i++;
            }
            values.push(num);
            num = 0;
            i--;
        }

       

        else if (isOperator(ch)) {

            while (!ops.empty() && precedence(ops.top()) >= precedence(ch)) {
                int b = values.top(); values.pop();
                int a = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOp(a, b, op));
            }
            ops.push(ch);
        }

        else {
            cout << "Invalid character: " << ch << endl;
            return -1;
        }
    }


    while (!ops.empty()) {
        int b = values.top(); values.pop();
        int a = values.top(); values.pop();
        char op = ops.top(); ops.pop();
        values.push(applyOp(a, b, op));
    }

    if (values.size() != 1) {
        cout << "Invalid infix expression!" << endl;
        return -1;
    }

    return values.top();
}

int main() {
    string infix;
    cout << "Enter infix expression (space-separated): ";
    getline(cin, infix);

    int result = evaluateInfix(infix);
    if (result != -1) {
        cout << "Result: " << result << endl;
    }

    return 0;
}
