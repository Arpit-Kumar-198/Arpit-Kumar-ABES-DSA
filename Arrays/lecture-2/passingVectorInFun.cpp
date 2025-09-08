#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(vector<int> a) // here a new vector <a> is created and copied all the data of <v> in <a>
{                           // if I write &a <a> is not created &a will point to <v> and it will cahnge it also
    a[0] = 100;
     for(int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);  // vector is passed by value.
    cout<<endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}