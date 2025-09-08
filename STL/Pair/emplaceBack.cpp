#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<pair<int,int>> v;

   v.push_back({1,2});          // it takes an object 

   v.emplace_back(4,5);     // emplace back will not show error but push back will show error if we remove this -> {}
   // emplace_back() takes constructor arguments, not an object.
   // it is faster 

   for(auto val : v) cout << val.first << " , " << val.second << endl;



   // so push back make an object in memory then copy or move our object there



   // brooo exactly 🔥🔥 You're absolutely right , emplace_back() is like directly calling a constructor inside the container.
}