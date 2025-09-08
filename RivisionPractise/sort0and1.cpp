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
    int lo = 0, m = 0, hi = n-1;
    while(m<=hi){
        if(v[m]==1){
            swap(v[m],v[hi]);
            hi--;
        }
        else{
            lo++;
            m++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}