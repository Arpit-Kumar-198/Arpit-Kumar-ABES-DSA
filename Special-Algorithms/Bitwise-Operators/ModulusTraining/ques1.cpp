#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    // prlong long int factorial of first 25 natural numbers and modulus the result by 10^9+7

    // we know that (a*b)%c = (a%c * b%c)%c
    long long int n;
    cin >> n;
    vector<long long int> v(n+1,1);
    long long int MOD = 1000000000+7;
    for(long long int i = 2; i <= n; i++)
    {
        v[i] = ((i%MOD) * (v[i-1]%MOD))%MOD;
    }
    for(long long int i = 2; i <= n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}