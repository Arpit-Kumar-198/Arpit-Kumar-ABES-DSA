#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    // find kth smallest element
    vector<int> arr = {10,20,-4,6,18,24,105,118};

    priority_queue<int> pq; // max heap
    cout << "Enter k : ";   
    int k;
    cin >> k;

    for (int i = 0; i < arr.size(); i++){
        pq.push(arr[i]);
        if(pq.size() > k)
            pq.pop();       // agar pq.size() > k thats means there are k smaller elements than the top element so top element can never be kth smallest
    }

    cout << pq.top() << " ";
    // tc is O(n logk)
    return 0;
}
// must do leetcode 378 & 215