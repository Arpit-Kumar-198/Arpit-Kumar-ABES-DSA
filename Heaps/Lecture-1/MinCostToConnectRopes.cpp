// minimum cost to connect all ropes 
// task is to join all the ropes with minimum cost possible , cost of joining two ropes is sum of those ropes

#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    vector<int> arr = {2, 4, 7, 1, 8};
    priority_queue<int, vector<int>, greater<int> > pq;

    int n = arr.size();
    for (int i = 0; i < n; i++){
        pq.push(arr[i]);
    }

    int cost = 0;
    while (pq.size() != 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        cost += (a + b);
        pq.push(a + b);
    }

    cout << "Minimum cost is : " << cost << "\n";
    return 0;
}