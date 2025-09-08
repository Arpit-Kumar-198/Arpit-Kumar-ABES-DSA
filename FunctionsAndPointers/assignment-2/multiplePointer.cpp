#include<iostream>
using namespace std;
int main()
{
    int *p, *q;
    int a = 5, b = 20;
    int **r, **s;
    int ***t, ***u;
    p = &a;
    q = &b;
    cout << p << " " << q << endl;
    cout << (*p) << " " << (*q) << endl;
    r = &p;
    s = &q;
    cout << *r << " " << *s << endl;
    cout << **r << " " << **s << endl;
    t = &r;
    u = &s;
    cout << **t << " " << **u << endl;
    cout << (***t) << " " << (***u) << endl;

}