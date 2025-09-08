#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // Find largest 3 numbers in array .
    vector<int> v;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elemenst : ";
    for(int i = 0; i < n; i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    int l1 = v[0];
    for(int i = 0; i < n; i++)
    {
        if(v[i] > l1)
        {
            l1 = v[i];
        }
    }
    int l2 = v[0], l3 = v[0];
    for(int i = 0; i < n; i++)
    {
        if(v[i] > l2 && v[i] != l1)
        {
            l2 = v[i];
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(v[i] > l3 && v[i] != l1 && v[i] != l2)
        {
            l3 = v[i];
        }
    }
    cout<<"Largest three numbers in array are : "<<l1<<" "<<l2<<" "<<l3;
    return 0;
}