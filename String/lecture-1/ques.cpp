// Input an integer and find the no. of digits without any loop.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout << "Enter a no. : ";
    cin >> n;
    string s = to_string(n);
    cout << s << endl;

    // string to integer : 
    string str = "12249";
    int x = stoi(str);
    cout << x << endl;

    // stoll function : 
    string str2 = "123456789344343";
    long long y = stoll(str2);   // stoi => sto(int) and stoll => sto(long long)
    cout << y << endl;
    return 0;
}