//  Reorder queue (Interleave 1st with 2nd half) do it only using one stack.
// 1,2,3,4,5,6,7,8  => 1,5,2,6,3,7,4,8
#include<iostream>
#include<queue>
#include<stack>
using namespace std;


int main(){
    int n;
    cout << "Enter size of queue : ";
    cin >> n;
    queue<int> q;
    cout << "Enter elements in queue : ";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    int t = n/2;
    stack<int> st;
    while(t>0){
        st.push(q.front());
        q.pop();
        t--;
    }
    while(st.size()!=0){
        q.push(st.top());
        st.pop();
    }
    t = n/2;
    while(t>0){
        st.push(q.front());
        q.pop();
        t--;
    }
    queue<int> reorder;

    while(st.size()&&q.size()){
        reorder.push(st.top());
        reorder.push(q.front());
        
        st.pop();
        q.pop();
    }
    while(reorder.size()){
       st.push(reorder.front());
       reorder.pop();
    }
    while(st.size()){
        reorder.push(st.top());
        st.pop();
     }

     cout << "Reordered queue : ";
     t = n;
     while(t){
        cout << reorder.front() << " ";
        reorder.push(reorder.front());
        reorder.pop();
        t--;
     }
    return 0;
}
