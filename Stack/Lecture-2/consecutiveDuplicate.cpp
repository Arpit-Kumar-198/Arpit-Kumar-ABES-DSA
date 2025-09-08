// remove consecutive duplicates from string
#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;


string consecutiveDuplicate(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i = 1; i < s.size(); i++){
        if(st.top()!=s[i]) st.push(s[i]);
    }
    string ans = "";
    while(st.size()>0){
        ans = st.top()+ans;
        st.pop();
    }
    return ans;
}
int main(){
    string s;
    getline(cin,s);
    
    cout << consecutiveDuplicate(s) << endl;
    return 0;
}
