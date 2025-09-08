#include<iostream>
#include<string>
#include<vector>
using namespace std;
class myStack{
    public:
        vector<char> arr;
        void push(char val){
            arr.push_back(val);
        }
        void pop(){
            if(arr.size()==0){
                cout << "Stack is empty\n";
                return;
            }
            arr.pop_back();
        }
        char top(){
            return arr[arr.size()-1];
        }
        int size(){
            return arr.size();
        }
        bool empty(){
            if(arr.size()==0) return true;
            else return false;
        }
};

bool isBalance(string s){
    myStack st;
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
        else if(s[i]==')' || s[i]=='}' || s[i]==']') {
            if(st.empty()){
                return false;
            }
            else {
                char ch = st.top();
                st.pop();
                if((s[i]==')' && ch!='(') || (s[i]=='}' && ch!='{') || (s[i]==']' && ch!='[')) return false;

            }
        }
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
   if(isBalance(s)){
    cout << "Balanced" << endl;
   }
   else cout << "Not balanced" << endl;
    return 0;
}
