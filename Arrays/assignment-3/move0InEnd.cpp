#include<iostream>
#include<vector>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    return;
}
using namespace std;
int main()
{
    vector<int> v;
    int size, c = 0;
    cin>>size;
    for(int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int j = 0;
    for(int i = 0; i < size; i++)
    {
        if(v[i] != 0)
        {
            swap(&v[i],&v[j]);
            j++;
        }
    }
    for(int i = 0; i < size; i++)
    {
         cout<<v[i];
    }

    return 0;
}
