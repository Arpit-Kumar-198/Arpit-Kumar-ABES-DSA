#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // Move all -ve num to beginning and all +ve num in the end.
    vector<int> v;
    int n;
    cout<<"Enter size : ";
    cin>>n;
    cout<<"Enter elemenst : ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int i = 0,  j = n-1;
    while(i < j)
    {
        if(v[i] <= 0) i++;
        else if(v[j] >= 0) j--;
        else if(v[i] > 0 && v[j] < 0)
        {
            int t = v[i];
            v[i] = v[j];
            v[j] = t;
            i++,j--;
        }
        
    }
    for(int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}