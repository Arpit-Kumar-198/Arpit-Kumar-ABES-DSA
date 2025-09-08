#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    // OP question : find character and frequency of character occuring most time
    string s;
    getline(cin, s);
    vector<int> arr(26,0);
    for(int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii-97]++;
    }
    int max = 0;
    for(int i = 0; i < 26; i++)
    {
        if(arr[i] > max) max = arr[i];
    }
    for(int i = 0; i < 26; i++)
    {
        if(arr[i] == max){
            int ascii = i + 97;
            cout << (char)ascii << " " << max;
            cout << endl;
        }
    }
    return 0;
}