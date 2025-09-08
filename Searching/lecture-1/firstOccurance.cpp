// leetcode 34
// find first occurance of target element in sorted array 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int tgt;
    cin >> tgt;
    int c = 1;
    int low = 0, high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(v[mid] == tgt)
        {
           if(v[mid-1] == tgt) high = mid - 1;
           else{
            cout << mid;
            c = 0;
            break;
           }
        }
        else if(v[mid] < tgt) low = mid + 1;
        else high = mid - 1;
    }
    if(c == 1) cout << (-1);
    return 0;
}