/*
    Print all the elements of an array in reverse order using recursion
*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void display(vector<int> v, int n, int idx)
{
    if(idx < 0) return;
    cout << v[idx] << " ";
    display(v,n,idx-1);
}
int main()
{
    int n;
    cout <<"Enter size : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter element in array :";
    for(int i = 0; i < n; i++) cin >> v[i];
    display(v,n,n-1);
}