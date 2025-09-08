#include<iostream>
#include<vector>
using namespace std;
void subset(int a[], int n, int idx, vector<int> ans, int k)
{
    if(idx == n)
    {
        if(ans.size() == k)
        {
            for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        cout << endl;
        }
        return;
    }
   subset(a, n, idx+1, ans, k);
   ans.push_back(a[idx]);
    subset(a, n, idx+1, ans, k);
}

    //print all increasing sequence of length k from first n natural numbers.   // 123 = [1,2], [1,3], [2,3] for k = 2
    // leetcode 78
int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int a[n];
    for(int i = 0; i < n; i++) a[i] = i+1;

    vector<int> v;
    subset(a,n,0,v, k);
    return 0;
}