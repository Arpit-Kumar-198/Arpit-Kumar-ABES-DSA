#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   vector<int> v = {3,4,5,6,7,8,9};

    cout << binary_search(v.begin(),v.end(),6) << endl; // return 1 if found 

    cout << *(max_element(v.begin(),v.end())) << endl;  // return iterator of max element
    cout << *(min_element(v.begin(),v.end())) << endl;

    // count set bit
    cout << __builtin_popcount(7);  // 3 set bit 
    return 0;
}