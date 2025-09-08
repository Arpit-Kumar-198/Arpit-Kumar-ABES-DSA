// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int min(int a, int b)
{
    if(a < b) return a;
    else return b;
}
int trapwater(vector<int>& v , int n)
{
    int c = 0;
    int prev[n];
    int brr[n];
    prev[0] = -1;
    int max = v[0];
    for(int i = 1; i < n; i++)
    {
        prev[i] = max;
        if(v[i] > max) max = v[i];
    }
    int max2 = v[n-1];
    brr[n-1] = -1; 
    for(int i = n-2; i >= 0; i--)
    {
        brr[i] = max2;
        if(v[i] > max2) max2 = v[i];
    }
    for(int i = 1; i <= n-2; i++)
    {
        prev[i] = min(prev[i],  brr[i]);
    }
    for(int i = 1; i <= n-2; i++)
    {
        if(v[i] < prev[i]) c += prev[i]-v[i];
    }
    return c;
}
int main() {
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int w = trapwater(v,n);
    cout << w;
    return 0;
}

// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n = height.size();
//         int prev[n];
//         prev[0] = -1;
//         int max = height[0];
//         for(int i = 1; i < n; i++)
//         {
//             prev[i] = max;
//             if(height[i] > max) max = height[i];
//         }
//         int next[n];
//         next[n-1] = -1;
//         max = height[n-1];
//         for(int i = n-2; i >=  0; i--)
//         {
//             next[i] = max;
//             if(height[i]>max) max = height[i];
//         }
//         for(int i = 0; i < n; i++)
//         {
//             prev[i] = min(prev[i],next[i]);
//         }
//         // calculating water
//         int water = 0;
//         for(int i = 1; i <= n-2; i++)
//         {
//             if(height[i]<prev[i])
//             {
//                 water += prev[i] - height[i];
//             }
//         }
//         return water;
//     }
// };