#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // Sort 0s and 1s using 1 loop.
    vector<int> v;
    int n;
    cout<<"Enter size : ";
    cin>>n;
    cout<<"Enter elemenst (only 0 or 1) : ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int i = 0, j = n-1;
    while(i < j)
    {
        if(v[i] == 0) i++;
        else if(v[j] == 1) j--;
        else if(v[i] == 1 && v[j] == 0)
        {
            v[i] = 0;
            v[j] = 1;
            i++,j--;
        }
        else if(i>j) break;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}