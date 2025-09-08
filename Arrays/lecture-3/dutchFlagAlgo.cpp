#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // leetcode 75
    // Sort 0s, 1s and 2s
    vector<int> v;
    int n;
    cout<<"Enter size : ";
    cin>>n;
    cout<<"Enter elemenst (only 0, 1, 2) : ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int low = 0, mid = 0, high = n-1;
    while(mid <= high)
    {
        if(v[mid] == 2)
        {
            int t = v[mid];
            v[mid] = v[high];
            v[high] = t;
            high--;
        }
        else if(v[mid] == 0)
        {
            int s = v[mid];
            v[mid] = v[low];
            v[low] = s;
            low++;
            mid++;
        }
        else mid++;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}