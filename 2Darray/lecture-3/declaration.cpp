#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector< vector<int> > v(3, vector<int> (4,2));
    cout<<v.size()<<endl; // size of v is 3 -> 3 vectors can store in v.
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
             cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
   
    return 0;

}