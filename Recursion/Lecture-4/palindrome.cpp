/*
    check a string is palindrome or not using recursion
*/
#include<iostream>
using namespace std;
void palindrome(string ans, string original, int idx)
{
    if(ans == original){
        cout << "Palindrome";
        return;
    }
    if(idx < 0)
    {
        cout << "Not Palindrome";
        return;
    }
    palindrome(ans+original[idx],original,idx-1);
}
int main()
{
    string s;
    cin >> s;
    palindrome("",s,s.size()-1);
    return 0;
}