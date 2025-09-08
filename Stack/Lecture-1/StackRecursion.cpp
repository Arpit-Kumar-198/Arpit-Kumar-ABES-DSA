// display stack using recursion
#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> st){
    if(st.size()==0) return;
    cout << st.top() << " ";
    int x = st.top();
    st.pop();
    display(st);
    st.push(x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    display(st);
    return 0;
}