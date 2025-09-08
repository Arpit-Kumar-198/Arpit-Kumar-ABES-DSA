#include <iostream>
#include <stack>
#include <string>
#include <cmath> // for pow
#include <algorithm> // for reverse
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

int evaluatePrefix(string expr) {
    stack<int> st;
    for(int i = expr.length() - 1; i >= 0; i--) {
        char ch = expr[i];

        if(ch == ' ') continue;

        if(isdigit(ch)) {
            int num = 0, place = 1;
            while(i >= 0 && isdigit(expr[i])) {
                num = (expr[i] - '0') * place + num;
                place *= 10;
                i--;
            }
            i++; // undo last i--
            st.push(num);
        }
        else if(isOperator(ch)) {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            int result = applyOp(a, b, ch);
            st.push(result);
        }
    }
    return st.top();
}

int main() {
    string prefix;
    cout << "Enter prefix expression (space-separated): ";
    getline(cin, prefix);

    int result = evaluatePrefix(prefix);
    if (result != -1) {
        cout << "Result: " << result << endl;
    }

    return 0;
}
