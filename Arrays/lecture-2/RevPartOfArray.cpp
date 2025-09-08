#include<iostream>
#include<vector>
using namespace std;
void rev(int a, int b, vector<int>& v)
{
    for(int i = a, j = b; i < j; i++,j--)
    {
        int t = v[i];
        v[i] = v[j];
        v[j] = t;
    }
}
int main()
{
    // REverse part of the array using function.
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
    int a,b;
    cout<<"Enter starting and ending index : ";
    cin>>a>>b;
    rev(a,b,v);
    for(int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}