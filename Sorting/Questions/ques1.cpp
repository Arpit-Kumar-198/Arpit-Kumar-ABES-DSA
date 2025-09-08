#include<iostream>
#include<string>
using namespace std;
int main()
{
    /*
        Sort a string in decreasing order of values associated after removal of values smaller than X
    */
    string str, str2;
    cin >> str;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] >= 'X') str2 += str[i];
    }
    for(int i = 0; i < str2.length()-1; i++)
    {
        for(int j = 0; j < str2.length()-i-1; j++)
        {
            if(str2[j] > str2[j+1])
            {
                int t = str2[j];
                str2[j] = str2[j+1];
                str2[j+1] = t;
            }
        }
    }
    cout << str2;
    return 0;
}