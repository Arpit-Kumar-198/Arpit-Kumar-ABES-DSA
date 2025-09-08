#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<unordered_set>

using namespace std;
int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        unordered_set<string> myset;
        for(int i = 0; i < n; i++){
            string s = "";
            for(int j = words[i].size()-1; j >= 0; j--) s += words[i][j];
            cout << s << endl;
            myset.insert(s);
        }
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(myset.find(words[i]) != myset.end()) cnt++;
        }
        return cnt;
    }
int main()
{
    vector<string> v = {"cd", "ac", "dc", "ca", "zz"};

    cout << maximumNumberOfStringPairs(v);
    return 0;
}