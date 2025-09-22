#include<iostream>
#include<vector>
using namespace std;
int main(){
    /*
Roy has N coin boxes numbered from 1 to N.
Every day he selects two indices [L,R] and adds 1 coin to each coin box starting from L to R (both inclusive).
He does this for M number of days.

After M days, Roy has a query: How many coin boxes have atleast X coins.
He has Q such queries.

Input:
First line contains N - number of coin boxes.
Second line contains M - number of days.
Each of the next M lines consists of two space separated integers L and R.
Followed by integer Q - number of queries.
Each of next Q lines contain a single integer X.

Output:
For each query output the result in a new line.

Constraints:
1 ≤ N ≤ 1000000
1 ≤ M ≤ 1000000
1 ≤ L ≤ R ≤ N
1 ≤ Q ≤ 1000000
1 ≤ X ≤ N

Input:
7
4
1 3
2 5
1 2
5 6
4
1
7
4
2

Output: 
6
0
0
4

    */

    int n;
    cin >> n;
    vector<int> arr(n + 1, 0);
    int m;
    cin >> m;
    vector<int> l(n + 1, 0);
    vector<int> r(n + 1, 0);
    for (int i = 0; i < m; i++){
        int L, R;
        cin >> L >> R;
        l[L]++;
        r[R]++;
    }
    vector<int> f(n + 1, 1);
    f[1] = l[1];
    for (int i = 2; i <= n; i++){
        f[i] = f[i - 1] + l[i] - r[i - 1];
    }
    vector<int> c(1000001,0);
    for (int i = 1; i <= n; i++){
        c[f[i]]++;
    }

    int suff = c[c.size() - 1];
    for (int i = c.size() - 2; i >= 1; i--)
    {
        c[i] = c[i] + suff;
        suff = c[i];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        cout << c[x] << endl;
    }
        return 0;
}