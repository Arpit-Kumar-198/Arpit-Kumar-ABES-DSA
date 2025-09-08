// string is also pass by value like vector.
// to pass string by reference & operator is used like vector
#include <iostream>
#include<algorithm>
using namespace std;
void fun(string& s)
{
    for(int i = 0, j = s.size()-1; i < j; i++,j--)
    {
        swap(s[i], s[j]);
    }
    cout << s << endl;
}
int main() {
   string s = "abc";
   cout << s<< endl;
   fun(s);
   cout << s << endl;

    return 0;
}