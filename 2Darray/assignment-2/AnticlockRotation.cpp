#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int m, n;
    cin>>m>>n;
vector<vector<int>> mat(m, vector<int> (n));
for(int i = 0; i < m; i++)
{
    for(int j = 0;  j < n; j++)
    {
        cin>>mat[i][j];
    }
}
for(int i = 0; i < n; i++)
{
    for(int j = 0;  j <= i; j++)
    {
        int t = mat[i][j];
        mat[i][j] = mat[j][i];
        mat[j][i] = t;
    }
}
for(int j = 0; j < m; j++)
{
    for(int i = 0, k = n-1;  i < k; i++, k--)
    {
        int c = mat[i][j];
        mat[i][j] = mat[k][j];
        mat[k][j] = c;
    }
}
for(int i = 0; i < n; i++)
{
    for(int j = 0;  j < m; j++)
    {
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}