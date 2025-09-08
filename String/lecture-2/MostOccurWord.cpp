#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<string> v;
    string str = "raghav is a math teacher. He is a DSA mentor";
    stringstream ss(str);
    string t;
    while(ss >> t)
    {
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
    {
       cout << v[i] << " ";
    }
    int maxcount = 0, count = 0;
    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] == v[i-1])count++;
        else count = 1;
        maxcount = max(maxcount, count);
    }
    count = 1;
    cout << endl;
    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] == v[i-1])count++;
        else count = 1;
        if(maxcount == count) cout << v[i] << " : " << maxcount << endl;
    }
    return 0;
}