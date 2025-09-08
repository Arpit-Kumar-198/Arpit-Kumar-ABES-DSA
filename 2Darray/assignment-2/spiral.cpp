#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m , n;
    cin >> m >> n;
    vector<vector<int>> matrix(m,vector<int> (n));
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>matrix[i][j];
        }
    }
    int fr = 0;
    int fc = 0;
    int lc = n-1;
    int lr = m-1;
    int tne = m * n;
    int count = 0;
    while(count < m * n)
    {
        for(int j = fc; j <= lc && count < tne; j++)
        {
             cout << matrix[fr][j] << " ";
             count++;
        }
        fr++;
        for(int i = fr; i <= lr && count < tne; i++)
        {
             cout << matrix[i][lc] << " ";
             count++;
        }
        lc--;
        for(int j = lc; j >= fc && count < tne; j--)
        {
             cout << matrix[lr][j] << " ";
             count++;
        }
        lr--;
        for(int i = lr; i >= fr && count < tne; i--)
        {
             cout << matrix[i][fc] << " ";
             count++;
        }
        fc++;
        if(count > tne) break;
    }
    
    return 0;
}
