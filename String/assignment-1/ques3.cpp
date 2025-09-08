#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string s2 = s;
    reverse(s.begin(), s.end());
    int c = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == s2[i]) c++;
    }
    if(c == s2.size()) cout << "Palindrome";
    else cout << "Not";
    return 0;
}
