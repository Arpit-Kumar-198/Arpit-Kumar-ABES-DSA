/*
     Write a program to find the minimum element of an array using recursion
*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int minINarray(vector<int> v, int n, int idx, int m)
{
    if(v[idx] < m) m = v[idx];
    if(idx == n-1) return m;
    return(minINarray(v,n,idx+1, m));
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    cout << minINarray(v,n,1,v[0]);
    return 0;
}