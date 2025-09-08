#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<string> v;
    string str;
    getline(cin,str);
    stringstream ss(str);
    string temp;
    while(ss >> temp)
    {
         v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) cout << v[i] <<" ";
    cout << endl;
    cout << v[v.size() - 1];
    return 0;
}