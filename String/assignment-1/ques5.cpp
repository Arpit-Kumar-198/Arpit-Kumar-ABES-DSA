// convert a string into number without using built In fun.
#include<iostream>
#include<string>

using namespace std;
int main()
{
    string s;
    cin >> s;   // Input example = '12345';
//builtIn function =>     // int n = stoi(s);
                         // cout << n;

    int n = s.size();
    int x = 0;
    for(int i = 0; i < n; i++)
    {
        x = x * 10;
        x += s[i]-48;
    }
    cout << x;
    
    return 0;
}