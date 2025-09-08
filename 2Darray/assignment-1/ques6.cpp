// Write a function which display middle row  and middle column of 2d matrix.
#include<iostream>
#include<vector>
using namespace std;
void mid( const vector<vector<int>> mat, int a, int b)
{
    a = a/2;
    b = b/2;
    for(int i = 0; i < mat[0].size(); i++)
    {
         for(int j = 0; j < mat[0].size(); j++)
    {
        if(i == a || j == b) cout<<mat[i][j]<<" ";
        else cout<<"  ";
    }
    cout<<endl;
    }
   
}
int main()
{
    int m, n;
    cin>>m>>n;
    vector<vector<int>> matrix(m,vector<int>(n));
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
             cin>>matrix[i][j];
        }
    }
    mid(matrix,m,n);
    return 0;
}