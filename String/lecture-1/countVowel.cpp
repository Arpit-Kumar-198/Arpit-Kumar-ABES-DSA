#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string s;
    // getline(cin, s);
    // int c = 0, i = 0;
    // while(s[i] != '\0')
    // {
    //     if(s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'U' || s[i] == 'O' || s[i] == 'I') c++;
    //     i++;
    // }
    // cout << c;
    int n;
    cin >> n;
    char s[n];
    for(int i = 0; i < n; i++) cin >> s[i];
    int i = 0, c = 0;
    while(s[i] != '\0')
    {
        if(s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'U' || s[i] == 'O' || s[i] == 'I') c++;
        i++;
    }
    cout << c;
    return 0;
}