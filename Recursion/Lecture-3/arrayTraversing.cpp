// traversing in array using recursion
#include<iostream>
using namespace std;
void travel(int a[], int x, int n)
{
    if(x == n) return;
    cout << a[x] << " ";
    travel(a, x+1, n);

}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    travel(a, 0, n);
    return 0;
}