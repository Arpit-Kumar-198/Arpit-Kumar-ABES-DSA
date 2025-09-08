#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // REverse the array wihtout using another array.
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
    for(int i = 0, j = n-1; i < j; i++,j--)
    {
        // We can also use function reverse(v.begin(),v.end()); to reverse the vector array
        int t = v[i];
        v[i] = v[j];
        v[j] = t;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}