#include<iostream>
#include<vector>
using namespace std;
void subarray(int a[], int idx, int n, vector<int> ans){
    if(idx == n)
    {
        for(int i = 0; i < ans.size(); i++) cout << ans[i];
        cout << endl;
        return;
    }
    subarray(a,idx+1,n,ans);
    if(ans.size()==0)
    {
        ans.push_back(a[idx]);
        subarray(a,idx+1,n,ans);
    }
    else if(a[idx-1] == ans[ans.size()-1]){
        ans.push_back(a[idx]);
        subarray(a,idx+1,n,ans);
    }
}
int main()
{
    int a[3] = {1,2,3};
    int n = sizeof(a)/sizeof(a[0]);    vector<int> v;
    subarray(a,0,n,v);
    return 0;
}