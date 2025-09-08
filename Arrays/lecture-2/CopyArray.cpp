#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // Copy elements of 1 array in another array in reverse order.
    vector<int> v;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements : ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> v2(n);
    for(int i = 0; i < n; i++)
    {
        v2[n-1-i] = v[i];
    }
     for(int i = 0; i < n; i++)
    {
        cout<<v2[i]<<" ";
    }

    return 0;
}