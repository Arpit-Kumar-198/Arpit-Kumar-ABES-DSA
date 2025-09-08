#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
int helper(int n, vector<int>& dp){
    if(n == 1)
        return dp[1] = 0;
    if(n == 2 || n == 3)
        return dp[n] = 1;

    if(dp[n] != 0)
        return dp[n];

    int res1 = helper(n - 1,dp);
    int res2 = INT_MAX, res3 = INT_MAX;

    if(n%2 == 0) res2 = helper(n/2, dp);
    if(n%3 == 0) res3 = helper(n/3, dp);

    return dp[n] = 1 + min(res1, min(res2, res3));
}
int countMinSteps(int n){
    vector<int> dp(n+1, 0);
    return helper(n, dp);
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