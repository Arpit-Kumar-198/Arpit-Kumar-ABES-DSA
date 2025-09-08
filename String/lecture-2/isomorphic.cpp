// leetcode 205
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    /*
        isomorphic means => for example s1 = "egg" and s2 = "add"
        in these strings ( e map with a ) , ( g amp with d ) , again ( g map with d )
        every character should map with same charachter of string 2.
        */
       
      string s;
      string t;
      cin >> s;
      cin >> t;
      vector<int> v(150,1000);
      if(s.length() != t.length())
      {
        cout << "false";
        return 0;
      }
      for(int i = 0; i < s.length(); i++)
      {
        int idx = (int)s[i];
        if(v[idx] == 1000) v[idx] = (s[i] - t[i]);
        else if(v[idx] != (s[i]-t[i]))
        {
            cout << "false";
            return 0;
        }
      }
      for(int i = 0; i < 150; i++) v[i] = 1000;
      for(int i = 0; i < t.length(); i++)
      {
        int idx = (int)t[i];
        if(v[idx] == 1000) v[idx] = (t[i] - s[i]);
        else if(v[idx] != (t[i]-s[i]))
        {
            cout << "false";
            return 0;
        }
      }
      cout << "true";

    return 0;
}