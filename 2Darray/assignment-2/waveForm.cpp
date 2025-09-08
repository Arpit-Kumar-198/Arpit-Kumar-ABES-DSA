// Online C++ compiler to run C++ program online
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
for(int j = 0; j < m; j++)
{
    if(j % 2 == 0)
    {
        for(int i = n-1; i >= 0; i--)
        {
            cout<<mat[i][j]<<" ";
        }
    }
    else 
    {
        for(int i = 0; i < n; i++)
        {
            cout<<mat[i][j]<<" ";
        }
    }
}
    return 0;
}