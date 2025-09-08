#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;

int countMinSteps(int n){
    vector<int> dp(n+1, 0);
    dp[1] = 0, dp[2] = 1, dp[3] = 1;

    for (int i = 4; i <= n; i++)
    {
        int res1 = dp[i - 1];
        int res2 = INT_MAX, res3 = INT_MAX;

        if(i%2 == 0)
            res2 = dp[i / 2];
        if(i%3 == 0)
            res3 = dp[i / 3];

        dp[i] = 1 + min(res1, min(res2, res3));
    }
    return dp[n];
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