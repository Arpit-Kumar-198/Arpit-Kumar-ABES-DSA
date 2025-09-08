#include<iostream>
using namespace std;
int main()
{
    char str[] = "Arpit Kumar";
    for(int i = 0; str[i] != '\0'; i++) cout << str[i] << " ";
    cout<<endl;
    cout << str << endl << str[2] << endl;
    string s = "Arpit is a SDE";
    cout << s;
    return 0;
}