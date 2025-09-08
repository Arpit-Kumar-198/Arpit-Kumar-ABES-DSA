#include<iostream>
#include<string>
#include<algorithm>
#include<stdbool.h>
using namespace std;
int main()
{
    string s1;
    getline(cin , s1);
    string s2;
    getline(cin , s2);
    sort(s1.begin(),s1.end());    // If I can make s2 by re arranging s1 then s1 is anagram of s2. Ex => Arpitkumar/kumarArpit
    sort(s2.begin(),s2.end());
    if(s1 == s2) cout << true;
    else cout << false;
    return 0;
}