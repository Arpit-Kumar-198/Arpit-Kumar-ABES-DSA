#include<iostream>
#include<cmath>
using namespace std;
int idxSeq(int a[], int n, int ele)
{
    int m = sqrt(n);
    int val[m], idx[m];
    int ind = 0;
    for(int i = 0; i < n && ind < m; i+=m)
    {
        val[ind] = a[i];
        idx[ind] = i;
        ind++;
    }
    int p1 = 0, p2 = n;
    if(val[0] > ele) return 0;
    for(int i = 0; i < ind; i++)
    {
        if(val[i] > ele)
        {
            p1 = idx[i-1];
            p2 = idx[i];
            break;
        }
        if(i == ind-1)
        {
            p1 = idx[i];
            p2 = n;
        }
    }
    int c = 0;
    for(int i = p1; i < p2; i++)
    {
        if(a[i] == ele) 
        {
            c = 1;
            break;
        }
    }
    return c;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int ele;
    cin >> ele;
    int c = idxSeq(a,n,ele);
    if(c == 1) cout << "Element found";
    else cout << "Not found";
    return 0;
}