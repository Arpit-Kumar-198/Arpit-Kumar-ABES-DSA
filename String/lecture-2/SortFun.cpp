#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    // cin >> s;
    getline(cin , s);
    sort(s.begin(),s.end());    // this function work on ascii values thats why it prints Naem if  I/P Name
    cout << s;
    return 0;
}