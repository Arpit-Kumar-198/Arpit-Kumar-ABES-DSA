#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int x;
    cin >> x;
    int idx = -1;
    int lo = 0, hi = n-1;
    while(lo<=hi)
    {
        if(v[lo]==x || v[hi]==x)
        {
            if(v[hi] == x)
            {
                idx = max(idx,hi);
                break;
            }
            else 
            {
                idx = max(idx,lo);
                lo++,hi--;
            }
        }
        else lo++,hi--;
    }
    cout << idx;
    
}