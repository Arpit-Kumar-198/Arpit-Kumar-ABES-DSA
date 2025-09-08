#include<iostream>
#include<queue>     
using namespace std;
int main(){
    priority_queue<int> q;
       
    q.push(10);
    q.push(50);
    q.push(30);
    
    // by default highest element has highest priority
    while(q.size()){
        cout << q.top() << " ";
        q.pop();

    }
    cout << endl;
}

