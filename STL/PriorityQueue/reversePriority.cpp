#include<iostream>
#include<queue>     
using namespace std;
int main(){
    priority_queue<int,vector<int> ,greater<int>> q;
    // greater<int>     -> this is called functor , its like a comparator which compare the elements
    q.push(10);
    q.push(50);
    q.push(30);
    
    // by default highest element has highest priority
    while(q.size()){
        cout << q.top() << " ";
        q.pop();

    }
    cout << endl;

    // pop(), push()     has O(logn) TC

}

