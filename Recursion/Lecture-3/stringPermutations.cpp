// print all possible permutations of a string with non repeating char.
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void stringPermutation(string ans, string original)
{
    if(original == "")
    {
        cout << ans << endl;
        return;
    }
    for(int i = 0; i < original.size(); i++)
    {
        char ch = original[i];
        string left = original.substr(0,i);         // .substr(0, i) means index 0 se start till length i
        string right = original.substr(i+1);       // .substr(i+1) means i+1 se le k end tk 
        stringPermutation(ans+ch, left+right);
    }
}
int main()
{
    string s;
    cout << "Enter string : ";
    cin >> s;
    stringPermutation("", s);
    return 0;
}