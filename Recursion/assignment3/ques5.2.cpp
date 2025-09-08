#include<iostream>
#include<vector>
using namespace std;
/*
     Given an integer array nums that may contain duplicates, return all possible subsets
(the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.
Example 1:
Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
*/
void subset(int a[], int n, vector< vector<int> >& finalAns, vector<int> ans, int idx, bool flag)
{
    if(idx == n)
    {
        finalAns.push_back(ans);
        return;
    }
    int ch = a[idx];
    if(idx == n-1)
    {
        if(flag == true) subset(a,n,finalAns,ans,idx+1,true);
         ans.push_back(a[idx]);
        subset(a,n,finalAns,ans,idx+1,true);
        return;
    }
    int dh = a[idx+1];
    if(ch == dh)
    {
        if(flag == true) subset(a,n,finalAns,ans,idx+1,true);
        ans.push_back(a[idx]);
        subset(a,n,finalAns,ans,idx+1,false);
    }
    else{
        if(flag == true) subset(a,n,finalAns,ans,idx+1,true);
        ans.push_back(a[idx]);
        subset(a,n,finalAns,ans,idx+1,true);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    cout << "Subsets : ";
    vector<int> ans;
    vector< vector<int> > finalAns;
    subset(a,n,finalAns,ans,0,true);
    for(int i = 0; i < finalAns.size(); i++)
    {
        for(int j = 0; j < finalAns[i].size(); j++) cout << finalAns[i][j] << " ";
        cout << endl;
    }

}