#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, pair<int,int>> m;

        int idx = -1;
        for(int i = 0; i < n; i++){
            string a = strs[i];
            sort(a.begin(),a.end());
            if(m.find(a) == m.end()){
                m[a].first++;
                idx += 1;
                m[a].second = idx;
            }
            else{
                m[a].first++;
            }
            
        }
        int size = 0;
        for(auto it : m){
            
            size += 1;
        }
        cout << endl;
        vector<vector<string>> ans(size);
        for(int i = 0; i < n; i++){
            string a = strs[i];
            sort(a.begin(),a.end());
            if(m.find(a) != m.end()){
                int idx = (m.find(a)->second).second;
                ans[idx].push_back(strs[i]);
                (m.find(a)->second).first--;
            }
        }
        return ans;
    }
    int main(){
        vector<string> v = {"eat", "tea", "tan", "ate", "nat", "bat"};
        vector<vector<string>> res = groupAnagrams(v);
        for (int i = 0; i < res.size(); i++){
            for (int j = 0; j < res[i].size(); j++)
                cout << v[i][j];
            cout << endl;
        }
            return 0;
    }