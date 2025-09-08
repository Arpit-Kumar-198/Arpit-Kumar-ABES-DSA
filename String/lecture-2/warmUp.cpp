#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    // Input a string and return the no. of times neighbouring characters are different from each other.
    // input = "abbcdeffghh"    output = 5
    string s;
    cin >> s;
    int c = 0;
    for(int i = 0; i < s.size()-1; i++)
    {
        if(s.size()==1) break;
        if(s.size()==2 && s[0] != s[1]){
            c = 1;
            break;
        }
        if(i == 0){
            if(s[i] != s[i+1]) c++;
        }
        else if(s[i] != s[i+1] && s[i] != s[i-1]) c++;
        else if(i == s.size()-1){
            if(s[i] != s[i-1]) c++;
        }
    }
    cout << c;
    return 0;
}