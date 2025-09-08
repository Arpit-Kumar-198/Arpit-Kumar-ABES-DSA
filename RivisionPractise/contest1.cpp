#include <bits/stdc++.h>
using namespace std;
string findCommonResponse(vector<vector<string>>& responses) {
        int n = responses.size();
        vector<string> temp;
        for(int i = 0; i < n; i++){
            sort(responses[i].begin(),responses[i].end());
            temp.push_back(responses[i][0]);
            for(int j = 1; j < responses[i].size(); j++){
                if(responses[i][j]!=responses[i][j-1]) temp.push_back(responses[i][0]);
            }
        }
        sort(temp.begin(),temp.end());
        string ans = temp[0];
        int pf = 1;
        int f = 1;
        for(int i = 1; i < temp.size(); i++){
           while(temp[i]==temp[i-1]){
            i++;
               if(f>pf) ans = temp[i];
               f++;
           }
      
            pf = f;
            f = 1;
        }
        return ans;
    }
int main() {
	// your code goes here
	vector<vector<string>> responses = {{"good","ok","good","ok"},{"ok","bad","good","ok","ok"},{"good"},{"bad"}};
	cout << findCommonResponse(responses);

}
