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
    v.insert(v.begin()+2,60);       // insert at index 2 use O(n)
    for(int val : v) cout << val << " ";

    v.clear();      // capacity same , size is 0
    for(int val : v) cout << val << " ";
    cout << endl;
    cout << v.empty() << endl;

}