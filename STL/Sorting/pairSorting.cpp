#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool comparator(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true;
    else if(p1.second > p2.second) return false;
    else {      // if p1.second == p2.second then compare based on first value of pair
        if(p1.first < p2.first) return true;
        else return false;
    }
}
int main(){
    vector<pair<int,int>> vec = {{3,1},{2,5},{5,4},{2,1}};
    int n = vec.size();
    sort(vec.begin(),vec.end());
    for(int i = 0; i < n; i++) cout << "{" << vec[i].first << "," << vec[i].second << "}" << endl;

    cout << endl;
    sort(vec.begin(),vec.end(),greater<pair<int,int>>());   // reverse sort
    for(int i = 0; i < n; i++) cout << "{" << vec[i].first << "," << vec[i].second << "}" << endl;

    cout << endl;
    sort(vec.begin(),vec.end(),comparator);   // sort using comparator (I am sorting basd on the second value of pair)
    for(int i = 0; i < n; i++) cout << "{" << vec[i].first << "," << vec[i].second << "}" << endl;

    
    return 0;
}