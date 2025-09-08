#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    // arpit => arpittipra concatenate string with its reverse
    string s;
    cin >> s;
    string s2 = s;
    reverse(s.begin(),s.end());
    s2 = s2+s;
    cout << s2;
    return 0;
}