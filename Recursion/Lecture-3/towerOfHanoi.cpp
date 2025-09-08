#include<iostream>
using namespace std;
void toh(int n, char s, char h, char d)
{
    if(n == 0) return;
    toh(n-1, s, d, h);
        cout << n << " : " << s << "->" << d << endl;
    toh(n-1, h, s, d);
}
int main()
{
    int n;
    cin >> n;
    cout << "Minimum no. of steps are : " << ((1 << n) - 1) << endl;
    toh(n, 'A', 'B', 'C');
}