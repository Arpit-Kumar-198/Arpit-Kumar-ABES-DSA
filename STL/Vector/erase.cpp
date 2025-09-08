#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for(int val : v) cout << val << " ";
    cout << endl;
    v.erase(v.begin());     // use O(n) size is changed but not capacity
    for(int val : v) cout << val << " ";
    v.erase(v.begin()+2);
    cout << endl;
    for(int val : v) cout << val << " ";
    cout << endl;
    v.erase(v.begin(),v.begin()+2);
    for(int val : v) cout << val << " ";

}