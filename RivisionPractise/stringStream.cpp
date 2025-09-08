#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    string s = "  hello arpit                how                are you     ";
    int space = -1;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]!=' '){
            // s.erase(s.begin(), s.begin() + i);
            ans = s.substr(i, s.size());
            break;
        }
    }
    for (int i = ans.size()-1; i >= 0; i--)
    {
        if(ans[i]!=' '){
            // s.erase(s.begin()+i+1, s.end());
            ans = ans.substr(0, 0 + i+1);
            break;
        }
    }
    string temp = ans;
    ans = "";
    for (int i = 0; i < temp.size(); i++)
    {
        if(temp[i]!=' '){
            ans += temp[i];
        }
        else{
            if(ans[ans.size()-1]!=' '){
                ans += " ";
            }
        }
    }

    cout << ans;
    return 0;
}