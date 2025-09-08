#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m;
    cin >> m;;
    int mat[m][m];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
           if(i == j || j+i == m-1) cout << mat[i][j] << " ";
           else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
