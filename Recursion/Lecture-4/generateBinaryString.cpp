/*
    Generate binary string of length n without consecutive 1s
*/
#include<iostream>
using namespace std;
void generate(string s, int n)
{
    if(s.size() == n) {
        cout << s << endl;
        return;
    }
    if(s[s.size()-1]=='1')
    {
        generate(s+'0',n);
    }
    else{
            generate(s+'0',n);
            generate(s+'1',n);
    }
}
int main()
{
    int n;
    cin >> n;
    generate("",n);
    return 0;
}