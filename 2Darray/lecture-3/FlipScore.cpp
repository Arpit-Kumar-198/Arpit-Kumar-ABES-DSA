#include<iostream>
#include<vector>
using namespace std;
// leetcode 861
int main()
{
    int m, n;
    cin >> m >> n;
    vector< vector<int> > mat(m, vector<int> (n));
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < m; i++)
    {
          if(mat[i][0] == 0){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 0) mat[i][j] = 1;
                else mat[i][j] = 0;
            }
          }
    }
    for(int j = 0; j < n; j++)
    {
        int nOz = 0;
        int nOo = 0;
        for(int i = 0; i < m; i++)
        {
            if(mat[i][j] == 0) nOz++;
            else nOo++;
        }
        if(nOz > nOo)
        {
            for(int i = 0; i < m; i++)
            {
                if(mat[i][j] == 0) mat[i][j] = 1;
                else mat[i][j] = 0;
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < m; i++)
    {
        int x = 1;
        for(int j = n-1; j >= 0; j--)
        {
            sum += mat[i][j] * x;
            x *= 2;
        }
    }
    cout << sum;
    return 0;
}