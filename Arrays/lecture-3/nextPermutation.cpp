#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// leetcode 31
int findJustLarge(vector<int> v, int n, int p)
{
    for(int i = p+1; i < n; i++)
    {
        if(v[i]>v[p]) return i;
    }
    return 0;
}
    void nextPermutation(vector<int>& nums,int n) {
        int idx = -1;
        for(int i = n-2; i >= 0; i--)
        {
            if(nums[i]<nums[i+1])
            {
                idx = i;
                break;
            }
        }
        if(idx == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        reverse(nums.begin()+(idx+1), nums.end());
 
        int justLargest = findJustLarge(nums,n,idx);
        int t = nums[justLargest];
        nums[justLargest] = nums[idx];
        nums[idx] = t;
        for(int i = 0; i < n; i++) cout<<nums[i]<<" ";
        return;
    }
int main()
{
     vector<int> v;
     int n;
     cin>>n;
     for(int i = 0; i < n; i++)
     {
        int x;
        cin>>x;
        v.push_back(x);
     }
     nextPermutation(v,n);
    return 0;
}

// funny ha ha ha 


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string num = "abcd";
    
//     if (next_permutation(num.begin(), num.end())) {
//         cout << num << endl;  
//     } else {
//         cout << "No next permutation" << endl;  
//     }

//     return 0;
// }
