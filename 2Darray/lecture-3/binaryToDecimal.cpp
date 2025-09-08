#include<iostream>
#include<vector>
int pow(int a, int b)
{
    int p = 1;
    for(int i = 1; i <= b; i++)
    {
        p = p * a;
    }
    return p;
}
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int num = 0;
    for(int i = 0; i < n; i++)
    {
        num += v[i] * pow(2,n-i-1);
    }
    cout << num ;
    return 0;
}