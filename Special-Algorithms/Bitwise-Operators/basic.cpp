#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    cout << (a<<3) << endl; // left shift a<<b == a*2^b
    cout << (a>>2) << endl; // right shift a>>b == a/2^b


    // binary to decimal
    cout << "Enter a binary num : ";
    string s;
    cin >> s;
    int n = s.size();

    int ans = 0;
    for(int i = n-1; i >= 0; i--)
    {
        int num = s[i] - '0';
        ans = ans + num*(1 << (n-1-i));
    }
    cout << ans << endl;
}