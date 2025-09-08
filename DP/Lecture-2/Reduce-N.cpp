#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int countMinSteps(int n){
   if(n == 1) return 0;
   if(n == 2 || n == 3) return 1;
   int res1 = countMinSteps(n - 1);
   int res2 = INT_MAX, res3 = INT_MAX;

   if(n%2 == 0) res2 = countMinSteps(n/2);
   if(n%3 == 0) res3 = countMinSteps(n/3);

   return 1 + min(res1, min(res2, res3));
}
int main(){
    /* There is a number n you can perform following three operations any no of times 
        1. n -> n-1
        2. n -> n/2 if n is divisible by 2
        3. n -> n/3 if n is divisible by 3
        
    */
    int n;
    cout << "Enter n : ";
    cin >> n;
    /* let n = 10, greedy approach will give wrong answer */

    cout << countMinSteps(n) << "\n";
    return 0;
}