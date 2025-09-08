class Solution {
public:
int helper(int n, vector<int>& dp){
    if(n <= 1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = helper(n-1,dp) + helper(n-2,dp);
}
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return helper(n,dp);
    }
};
/* Recursion + Memoization 
    TC = O(n) but SC = O(2n) although we ignore 2 
    because here n SC will come from Call stack and 
    n will come from dp array */