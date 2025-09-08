#include<iostream>
#include<vector>
#include<climits>
using namespace std;
float max(float a, float b){
    if(a > b) return a;
    else return b;
}
float min(float a, float b){
    if(a < b) return a;
    else return b;
}
int main(){
    /*
        Given an array , arr[] containing 'n' integers, the task is to find range (say k1,k2) such that after
        replacing each and every index of the array by |ai-k| (a0 ->  1st element and so on) where
         (i belongs to [1,n]), result in a sorted array. if no such integer exists that satisfies 
         the above condition then return -1;
    */
   vector<int> v;
   int n;
   cin >> n;
   for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
   }
  // a1 , a1, a3, a4 ....  
  //   |k-a2| >= |k-a1|  =>  (k-a2)^2 >= (k-a1)^2 generalize this formula you will get
  float kmin = (float)(INT_MIN);
  float kmax = (float)(INT_MAX);
  bool flag = true;
  for(int i = 0; i < n-1; i++){
    if(v[i] >= v[i+1]){
        kmin = max(kmin, (v[i]+v[i+1])/2.0);
    }
    else {
        kmax = min(kmax, (v[i]+v[i+1])/2.0);
    }
    if(kmin > kmax){
        flag = false;
        break;
    }
  }
  if(flag == false) cout<< -1;
  else if(kmin == kmax){
    if(kmin-(int)kmin == 0){
        cout << kmin;
    }
    else cout << -1;
  }
  else {
    if(kmin-(int)kmin > 0) kmin = (int)kmin + 1;
    cout << "[" << kmin << "," << (int)kmax << "]";
  }
    return 0;
}