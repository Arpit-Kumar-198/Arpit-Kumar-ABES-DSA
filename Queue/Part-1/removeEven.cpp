// remove even indexed elements from queue
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
// void removeEven(queue<int>& q){
//     int n = q.size();
//     queue<int> temp;
//     int pos = 0;
//     while(q.size()!=0){
//         if(pos%2==0){
//             temp.push(q.front());
//             q.pop();
//         }
//         else q.pop();
//         pos++;
//     }
//     while(temp.size()!=0){
//         q.push(temp.front());
//         temp.pop();
//     }

// }
void removeEven(queue<int>& q){
    int n = q.size();
   for(int i = 0; i < n; i++){
    if(i%2==0) q.pop();
    else{
        int x = q.front();
        q.pop();
        q.push(x);
    } 
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
    removeEven(q);
    display(q);

    return 0;
}