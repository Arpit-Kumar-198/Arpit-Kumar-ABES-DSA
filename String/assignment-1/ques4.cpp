// Reverse 2nd half or string having even length.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin , s);
    reverse(s.begin()+(s.size()/2), s.end());
    cout << s;
    return 0;
}