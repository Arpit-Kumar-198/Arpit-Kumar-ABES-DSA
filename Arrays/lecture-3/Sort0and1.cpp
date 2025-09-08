#include<iostream>
#include<vector>
using namespace std;
int main()
{
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
    int e0 = 0, e1 = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] == 0) e0++;
        else e1++;
    }
    for(int i = 0; i < n; i++)
    {
        if(i < e0)  v[i] = 0;
        else v[i] = 1;
        cout<<v[i]<<" ";
    }
    return 0;
}