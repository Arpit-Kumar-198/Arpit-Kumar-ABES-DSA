#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // Check wether array is sorted or not.
    vector<int> v;
    int n, c = 1;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elemenst : ";
    for(int i = 0; i < n; i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    for(int i = 0; i < n-1; i++)
    {
        if(v[i] > v[i+1])
        {
            c = 0;
            break;
        }
    }
    if(c == 1) cout<<"Sorted";
    else cout<<"Not sorted";
    return 0;
}