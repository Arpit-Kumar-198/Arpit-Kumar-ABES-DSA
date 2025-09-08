#include<iostream>
#include<vector>
using namespace std;
void substring(string ans, string original, vector<string>& v)
{
    if(original == ""){
       v.push_back(ans);
         return;
    }
    char ch = original[0];
    substring(ans+ch, original.substr(1), v);
    substring(ans, original.substr(1), v);
}
int main()
{
    string s;
    cin >> s;
    vector<string> v;
    substring("", s, v);
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    return 0;
}