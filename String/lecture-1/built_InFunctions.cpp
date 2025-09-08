#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    // string s;
    // cout << "Enter a string : ";
    // getline(cin, s);
    // cout << s << endl;
    // cout << "Length of string : " << s.size()<< endl;
    // s.push_back('H');   // only a single char can be push backed
    // cout << s << endl;
    // cout << "Length of string : " << s.size() <<endl;
    // s.pop_back();
    // cout << s << endl;
    // cout << "Length of string : " << s.size()<< endl;

    // string s1 = "Arpit";
    // string s2 = "Kumar";
    // s1 = s1 + s2;   // or s1 = s1 + "Kumar"     s1 = s1 + 123 not valid
    // cout<<s1<<endl;
    // s1 = "Kumar" + s1;
    // cout<<s1;

    // string s = "Arpit";
    // reverse(s.begin(),s.end());
    // cout<<s;
    // return 0;

    int x = 12345;
    // string s = (string)x;    // invalid
    string s = to_string(x);
    cout << s << endl;

    string s2 = "123456";
    int y = stoi(s2);
    cout << y <<" "<< s2.length();


}