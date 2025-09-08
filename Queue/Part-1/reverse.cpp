// reverse queue using stack
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>& q){
    int n = q.size();
    for(int i = 1; i <= n; i++){
        cout << q.front() << " ";
        int x = q.front();
        q.pop();
        q.push(x);
    }
    cout << endl;
    return;
}
void reverse(queue<int>& q){
    stack<int> st;
    int n = q.size();
    for(int i = 1; i <= n; i++){
        st.push(q.front());
        q.pop();
    }
    for(int i = 1; i <= n; i++){
       q.push(st.top());
       st.pop();
    }

}
int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    
    display(q);
    reverse(q);
    display(q);

    return 0;
}