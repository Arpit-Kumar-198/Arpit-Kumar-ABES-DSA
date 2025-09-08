#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    // k sorted array means each element can be at max k step away from original position
    vector<int> arr = {6,5,3,2,8,10,9};
    // here k = 3 for this case
    int k = 3;

    // vector<int> arr = {10,9,8,7,4,70,60,50};
    // int k = 4;

    priority_queue<int, vector<int> , greater<int> > pq; // min heap

    vector<int> ans;    
    // space complexity reduce krne k liye , idx = 0 kro and arr[idx] = pq.top() kro 
    for (int i = 0; i < arr.size(); i++)
    {
        pq.push(arr[i]);
        if(pq.size() > k){
            ans.push_back(pq.top());
            pq.pop();
        }
    }

    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }

    // sorted array 
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    // tc is O(n logk) better than O(n logn)
    return 0;
}
