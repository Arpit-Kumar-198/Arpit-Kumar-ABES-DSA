#include<iostream>
#include<string>
using namespace std;
int main()
{
    // Input a string and count all consonants
    string s;
    cin >> s;
    int c = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'U' || s[i] == 'O' || s[i] == 'I')
        continue;
        else c++;
    }
    cout << c;
    return 0;
}