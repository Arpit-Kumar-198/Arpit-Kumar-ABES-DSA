// reverse stack using recursion
// display stack using recursion
#include<iostream>
#include<stack>
using namespace std;
void pushATbottom(stack<int>& st, int val){
    if(st.size()==0) {
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushATbottom(st,val);
    st.push(x);
}
void show(stack<int> st){
    if(st.size()==0) return;
    cout << st.top() << " ";
    int x = st.top();
    st.pop();
    show(st);
    st.push(x);
}
void reverse(stack<int>& st){
    if(st.size()==1) return;
    
    int x = st.top();
    st.pop();
    reverse(st);
    pushATbottom(st,x);
   
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    reverse(st);
    show(st);
    return 0;
}