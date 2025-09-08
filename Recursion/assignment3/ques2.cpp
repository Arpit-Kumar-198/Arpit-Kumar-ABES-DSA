/*
    write a program to find the sum of all elements in an array using recursion
*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int sumArray(vector<int> v, int n, int idx, int sum)
{
    if(idx == n) return sum;
    return(v[idx] + sumArray(v,n,idx+1,sum));
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    cout << sumArray(v,n,0,0);
    return 0;
}