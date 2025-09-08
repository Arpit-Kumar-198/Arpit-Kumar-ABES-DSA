// reverse first k elements of queue
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
void reverseK(queue<int>& q, int k){
    stack<int> st;
    int x = k;
    while(k>0){
        st.push(q.front());
        q.pop();
        k--;
    }
    while(st.size()!=0){
        q.push(st.top());
        st.pop();
    }
    x = q.size()-x;
    while(x>0){
        int t = q.front();
        q.pop();
        q.push(t);
        x--;
    }
}
int main(){
    queue<int> q;
    int n;
    cout << "Enter size of queue : ";
    cin >> n;
    cout << "Enter elements in queue : ";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    int k;
    cout << "Enter value of k : ";
    cin >> k;
    display(q);
    reverseK(q,k);
    display(q);

    return 0;
}
