#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    string str = "My name is Arpit Kumar.";
    stringstream ss(str);
    string temp;
    while(ss >> temp)
    {
        cout << temp << endl;
    }
    
    return 0;
}
