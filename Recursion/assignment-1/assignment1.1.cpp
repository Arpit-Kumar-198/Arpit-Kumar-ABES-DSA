#include<iostream>
using namespace std;
void preInPost(int n)
{
    if(n == 0) return;
    cout << n << endl;
     preInPost(n-1);
    cout << n << endl;
}
int main()
{
    int n;
    cin >> n;
    preInPost(n);
    return 0;
}