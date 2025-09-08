#include<iostream>
using namespace std;
int main()
{
    //decimal to  binary 
    cout << "Enter a  num : ";
   int n;
   cin >> n;

   string ans = "";
    if(n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
   while(n > 0)
   {
    if(n%2 == 0) ans = "0"+ans;
    else ans = "1"+ans;
    n = n/2;
   }
   cout << ans << endl;
}