#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(6);    
    v.push_back(0);
    v.push_back(2);
    v.push_back(5);
    v.push_back(3);

    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();   // Reduce one element from last.
    v.pop_back();   // But it can't change capacity.
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<v.capacity();
    return 0;
}