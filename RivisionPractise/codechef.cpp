#include <bits/stdc++.h>
using namespace std;

bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
       

        vector<int> prefix(n);
        prefix[0] = nums[0];
        int pre = prefix[0];

        for(int i = 1; i < n; i++){
            prefix[i] = nums[i]+pre;
            pre = prefix[i];
        }
        unordered_map<int,int> mp; 
        
        for(int i = 0; i < n; i++){
            if(prefix[i] % k == 0 && i > 0) return true;
            if(mp.find(prefix[i]%k) != mp.end()){
                if(i - mp[prefix[i]%k] > 1)
                return true;
            }
            if(i==0) mp[prefix[i]%k] = i;
            else if(mp.count(prefix[i]%k) == 0 && prefix[i] != prefix[i-1]) mp[prefix[i]%k] = i;
            
        }
        for(auto it : mp)
            cout << it.first << " " << it.second << endl;
        return false;
    }

int main() {

    cout << (int)'o';
    return 0;
}