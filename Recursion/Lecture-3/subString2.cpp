#include<iostream>
#include<vector>
using namespace std;
// subset of string with duplicate char // very very important dry run this to enhance your knowledge.
void substring(string ans, string original, vector<string>& v, bool flag)
{
    if(original == ""){
       v.push_back(ans);
         return;
    }
    char ch = original[0];
    if(original.size() == 1)
    {
       if(flag == true) substring(ans+ch, original.substr(1), v,true);
        substring(ans, original.substr(1), v,true);
        return;
    }
    char dh = original[1];
    if(ch == dh)
    {
        if(flag == true) substring(ans+ch, original.substr(1), v,true);
        substring(ans, original.substr(1), v,false);
    }
    else{

        if(flag == true) substring(ans+ch, original.substr(1), v,true);
        substring(ans, original.substr(1), v,true);
    }
    
}
int main()
{
    string s;
    cin >> s;
    vector<string> v;
    substring("", s, v, true);
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    return 0;
}