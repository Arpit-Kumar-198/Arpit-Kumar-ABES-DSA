#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    // find largest num and its index
    string str[] = {"0123", "0023", "00182", "456", "2901", "940"};
    int idx = -1;
    int max = stoi(str[0]);
    for(int i = 0; i < 6; i++)
    {
        int x = stoi(str[i]);
        if(max < x)
        {
            max = x;
            idx = i;
        }
    }
    cout << "Number : " << max << endl << "Index : " << idx;
    return 0;
}