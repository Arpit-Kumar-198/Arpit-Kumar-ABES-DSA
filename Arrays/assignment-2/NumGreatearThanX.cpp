#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // Count the no. of elements strictly greater than x.
    vector<int> v;
    int n, x, c = 0, d = 0;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int> v2(n-1);
    cout<<"Enter elemenst : ";
    for(int i = 0; i < n; i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    cout<<"Enter X : ";
    cin>>x;
    for(int i = 0; i < n; i++)
    {
        if(v[i] > x)
        {
            c++;
            v2[d] = v[i];
            d++;
        }
    }
    cout<<"No. of elements greater than "<<x<<" is "<<c<<endl;
    cout<<"And those numbers are : ";
    for(int i = 0; i < v2.size(); i++)
    {
        if(v2[i] != 0 ) cout<<v2[i]<<" ";
    }
    return 0;
}