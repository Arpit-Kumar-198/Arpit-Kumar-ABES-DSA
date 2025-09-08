#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;
    int n  = s.length();
    reverse(s.begin(),s.begin()+(n/2));
    cout << s << endl;
    string s2 = "abcdef";
    cout << endl;
    cout << s2.substr(1) << endl;   // start from index1 and print all after idx 1 including 1
    cout << s2.substr(1, 3) << endl;    // start from index 1 and print 3 char
    return 0;
}