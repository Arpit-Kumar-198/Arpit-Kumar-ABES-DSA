#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s = "cab";
    vector<int> arr = {1, 2, 3};
    // abc
    // acb
    // bac
    // bca
    // cab
    // cba
    next_permutation(s.begin(),s.end());
   cout << s << endl;

   prev_permutation(s.begin(),s.end());
   cout << s << endl;

   next_permutation(arr.begin(),arr.end());
    for(int i : arr)
        cout << i << " ";
    return 0;
}