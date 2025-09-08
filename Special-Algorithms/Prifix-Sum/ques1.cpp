// check if an array can be partitioned into 2 continuous arrays of equal sum.
#include<iostream>
using namespace std;
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(a)/sizeof(a[0]);

    for(int i = 1; i < n; i++) a[i] = a[i-1]+a[i];  //prifix sum
    bool flag = false;
    for(int i = 0; i < n; i++)
    {
        if(a[i]*2 == a[n-1]) {
            flag = true;
            break;
        }
    }
   if(flag == true) cout << "Yes possible";
   else cout << "Not pssible";

}