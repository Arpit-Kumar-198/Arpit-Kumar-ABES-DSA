
#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main() {
    // leetcode 14
    string str = "flow flower flight";
    vector<string> v;
    stringstream ss(str);
    string temp;
    while(ss >> temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int n = v.size();
    string s = "";
    string first = v[0];
    string last = v[n-1];
    if(n==1)
    {
        cout << v[0];
        return 0;
    }
    for(int i = 0; i < min(first.length(), last.length()); i++)
    {
        if(first[i] == last[i]) s += first[i];
        else
        {
            cout << s;
            return 0;
        }
    }
    return 0;
}