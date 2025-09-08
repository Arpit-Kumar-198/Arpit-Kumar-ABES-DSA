#include <iostream>
#include <stack>
#include <string>
#include <cmath> // for pow() function
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

bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '^');
}

int evaluatePostfix(string expr) {
    stack<int> st;
    int num = 0;

    for (int i = 0; i < expr.size(); i++) {
        char ch = expr[i];

        if (ch == ' ') {
            continue;
        }
        else if (isdigit(ch)) {
            num = 0;
            while (i < expr.size() && isdigit(expr[i])) {
                num = num * 10 + (expr[i] - '0');
                i++;
            }
            st.push(num);
            num = 0;
            i--; // because the for loop will also increment i
        }
        else if (isOperator(ch)) {
            if (st.size() < 2) {
                cout << "Invalid expression!" << endl;
                return -1;
            }
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            st.push(applyOp(a, b, ch));
        }
    }

    if (st.size() != 1) {
        cout << "Invalid postfix expression!" << endl;
        return -1;
    }

    return st.top();
}

int main() {
    string postfix;
    cout << "Enter postfix expression (space-separated): ";
    getline(cin, postfix);

    int result = evaluatePostfix(postfix);
    if (result != -1) {
        cout << "Result: " << result << endl;
    }
    return 0;
}