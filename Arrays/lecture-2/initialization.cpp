#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(5); // vector<int> v(5,7) => each element have value 7.
    cout<<v.size()<<endl<<v.capacity()<<endl;
    cout<<"Enter elements : ";
    for(int i = 0; i < 5; i++)
    {
        cin>>v[i];
    }
    for(int i = 0; i < 5; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}