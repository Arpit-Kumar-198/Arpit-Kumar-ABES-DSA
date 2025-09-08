/*
     Write a program to find the index of a given element in an array using recursion. If the
element is present, return its index; otherwise, return -1
*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int index(vector<int> v, int n, int idx, int ele)
{
    if(v[idx] == ele) return idx;
    return index(v,n,idx+1,ele);
}
int main()
{
    int n;
    cout <<"Enter size : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter element in array :";
    for(int i = 0; i < n; i++) cin >> v[i];
    int x;
    cout << "Enter element : ";
    cin >> x;
    cout << index(v,n,0,x);
    return 0;
}