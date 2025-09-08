/*
    The first integer of each row is greater than the last integer of the previous row.
Given an integer target , return true if target is in matrix or false otherwise.
You must write a solution in O(log(m * n)) time complexity.
*/

#include <iostream>
#include<vector> 
using namespace std;
int main()
{
     int m, n;
    cin >> m >> n;
    vector< vector<int> > v(m, vector<int> (n));
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++) 
        {
            cin >> v[i][j];
        }
    }
    int tgt;
    cin >> tgt;
    int c = 0;
    int i = 0, j = n-1;
    while(i < m && j >= 0)
    {
        if(v[i][j] == tgt)
        {
            cout << "found";
            c = 1;
            break;
        }
        else if(v[i][j] > tgt) j--;
        else i++;
    }
    if(c == 0) cout << "no found";
    return 0;
}