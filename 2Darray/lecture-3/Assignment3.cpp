#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m, n;
    cin  >> m >> n; 
    vector< vector<int> > mat(m, vector<int> (n));
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++) cin >> mat[i][j];
    }
    int r, c;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(mat[i][j] == 0){
                r = i;
                c = j;
                break;  
            }
        }
    }
    for(int i = 0; i < m; i++) mat[i][c] = 0;
    for(int j = 0; j < n; j++) mat[r][j] = 0;
    cout << endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++){
            cout << mat[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}

