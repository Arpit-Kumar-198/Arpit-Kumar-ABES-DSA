#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

int precedence(char op) {
    if (op == '^') return 3;
    else if (op == '*' || op == '/' || op == '%') return 2;
    else if (op == '+' || op == '-') return 1;
    else return 0;
}

bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '^');
}

void infixToPostfix(string& infix, string& postfix) {
    stack<char> st;
    st.push('(');
    infix += ')';

    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];

        if (isdigit(ch) || isalpha(ch)) {
            postfix += ch;
        }
        else if (ch == '(') {
            st.push(ch);
        }
        else if (isOperator(ch)) {
            while (!st.empty() && isOperator(st.top()) && precedence(st.top()) >= precedence(ch)) {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop(); // pop '('
        }
    }
}

int main() {
    string infix, postfix = "";
    cout << "Enter infix expression: ";
    cin >> infix;

    infixToPostfix(infix, postfix);

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
