#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Front : " << v.front() << "\nBack : " << v.back() << endl;
    for(int val : v) cout << val << " ";
    vector<int> v2(v);
    cout << endl;
    for(int val : v) cout << val << " ";

}