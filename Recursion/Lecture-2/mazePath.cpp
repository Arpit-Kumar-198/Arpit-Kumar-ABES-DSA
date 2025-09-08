#include<iostream>
using namespace std;
//dp approach 
// int findPath(int sr, int er, int sc, int ec, vector< vector<int> >& dp){
//     if(sr > er || sc > ec) return 0;
//     if(sr == er && sc == ec) return 1;


//     if(dp[sr][sc] != -1) return dp[sr][sc];
//     return dp[sr][sc] = findPath(sr+1, er, sc, ec,dp) + findPath(sr,er,sc+1,ec,dp);

// }
//     int uniquePaths(int m, int n) {
//         vector< vector<int> > dp(m, vector<int>(n,-1));
//         return findPath(0,m-1,0,n-1,dp);
//     }


int mazePath(int sr, int sc, int er, int ec)    // sr = strating row , sc = strating col and so on
{
    if(sr > er || sc > ec) return 0;
    if(sr == er && sc == ec) return 1;
    int rightWays = mazePath(sr, sc+1, er, ec);
    int downWays = mazePath(sr+1, sc, er, ec);
    return (rightWays+downWays);
}
// int mazePath3(int rows, int cols)   
// {
//     if(rows < 1 || cols < 1) return 0;
//     if(rows == 1 && cols == 1) return 1;
//     int rightWays = mazePath3(rows, cols+1);
//     int downWays = mazePath3(rows-1, cols);
//     return (rightWays+downWays);
// }
void mazePath2(int rows, int cols, string s)
{
    if(rows < 1 || cols < 1) return;
    if(rows == 1 && cols == 1)
    {
        cout << s << endl;
        return;
    }
    mazePath2(rows, cols-1, s+'R');  // moving right
    mazePath2(rows-1, cols, s+'D');   // moving down
}
int main()
{
    int rows , cols ;
    cout << "Enter rows and cols : ";
    cin >> rows >> cols;
    cout << mazePath(1,1,rows,cols) << endl;
    mazePath2(rows,cols,"");
    return 0;
}
// long long ans = 1;
//         int r = min(m-1, n-1); // choose smaller to minimize loop
//         for (int i = 1; i <= r; i++) {
//             ans = ans * (m + n - 2 - i + 1) / i;
//         }
//         return (int)ans;