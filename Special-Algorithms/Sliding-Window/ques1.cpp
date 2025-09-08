//first neg number in every window of size k
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[] = {2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 4;

    vector<int> ans(n-k+1); // store first -ve element of Subarray of a[] of size k

    int p = 0;
    for(int i = 0; i < k; i++)
    {
        if(a[i] < 0)
        {
            p = i;
            break;
        }
    }
    ans[0] = a[p];

    int i = 1, j = k;
    while(j < n)
    {
        if(p >= i)  ans[i] = a[p];
        else
        {
            for(p = i; p <= j; p++)
            {
                if(a[p]<0) break;
            }
             ans[i] = a[p];
        }
        i++;
        j++;
    }

     for(int i = 0; i < ans.size(); i++)
    {
       cout << ans[i] << " ";
    }
    
}