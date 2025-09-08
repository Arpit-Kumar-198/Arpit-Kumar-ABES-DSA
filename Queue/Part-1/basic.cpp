#include<iostream>
#include<queue>
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
int main() {
    queue<int> q;

    // Push elements
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    // Display front element
    cout << "Front element: " << q.front() << endl; 

    // Pop front element
    q.pop();

    cout << "New front after pop: " << q.front() << endl; 

    cout << "Size: " << q.size() << endl;


    if (q.empty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    display(q);
    cout << q.front() << endl << q.back();
    return 0;
}
