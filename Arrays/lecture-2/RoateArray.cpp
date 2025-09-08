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
    // Rotate the array by k steps. (k is positive integer) 
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
    int k;
    cout<<"Enter k : ";
    cin>>k;
    k = k % n;

    rev(0,n-1,v);
    rev(0,k-1,v);
    rev(k,n-1,v);
    cout<<"After roation by k steps : ";
    for(int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}