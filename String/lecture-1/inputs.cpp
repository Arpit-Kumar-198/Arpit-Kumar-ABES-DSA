
#include<iostream>
using namespace std;
int main()
{
    // char str[11];   // input without spaces
    // for(int i = 0; i < 11; i++) cin >> str[i];
    // cout << str;

    // string s;   
    // cin >> s;       // Input only up to 1st space.
    // cout << s;

    string s;
    getline(cin,s);
    cout << s;
    
    return 0;
}