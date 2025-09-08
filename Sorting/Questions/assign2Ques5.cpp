#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    /*
        Given an array of string arr[] with all strings in lowercase. Sort given strings using bubble sort
        and display the sorted strings.
    */
    string str[3] = {"gzx" , "iabc" , "ahsui" };
    int n = 3;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(str[j] > str[j+1])
            {
                swap(str[j],str[j+1]);
            }
        }
    }
    for(int i = 0; i<n; i++) cout << str[i] << " ";
    return 0;
}