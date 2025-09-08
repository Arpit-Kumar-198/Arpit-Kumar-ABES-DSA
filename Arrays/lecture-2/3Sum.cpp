#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector< vector<int> > twosum(int idx1, int idx2, int x, vector<int> v)
{
    
    int lo = idx1, hi = idx2;
    vector< vector<int> > t;
    while(lo < hi)
    {
        if(v[lo]+v[hi] == x)
        {
            vector<int> g(2);
            g[0] = v[lo];
            g[1] = v[hi];
            t.push_back(g);
            
            // Skip duplicates
            while (lo < hi && v[lo] == v[lo + 1]) lo++;
            while (lo < hi && v[hi] == v[hi - 1]) hi--;
            lo++,hi--;
        }
        else if(v[lo]+v[hi] < x) lo++;
        else if(v[lo]+v[hi] > x) hi--;
    }

    return t;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector< vector<int> > ans;
    for(int i = 0; i < n; i++)
    {
        if(i > 0 && v[i] == v[i-1]) continue;
        int d1 = v[i];
        vector< vector<int> > temp = twosum(i+1,n-1,(-1*v[i]),v);
       for(int j = 0; j < temp.size(); j++)
       {
        vector<int> temp2;
        temp2.push_back(v[i]);
        temp2.push_back(temp[j][0]);
        temp2.push_back(temp[j][1]);

         ans.push_back(temp2);
       }
    }

    // print ans
    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < 3; j++) cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}