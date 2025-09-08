#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //FInd the last occurance of x in the array.
    vector<int> v;
    int n, x;
    cout<<"Enter size of the vector : ";
    cin>>n;
    cout<<"Enter elements in vector : ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter x : ";
    cin>>x;
    int lo = -1;
    for(int i = v.size()-1; i >= 0; i--)
    {
        if(v[i] == x){
            lo = i;
            break;
        }
    }
    cout<<"Last occurance of "<<x<<" is index "<<lo;
    return 0;
}
/*

#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n+1,1);
    for(int i = 2; i < v.size(); i++)
    {
        int x = i*i;
        while(x%i == 0 && x <= n)
        {
            v[i] = 0;
            x = x + i;
        }
    }
    for(int i = 2; i < v.size(); i++){
        if(v[i] != 0)  cout << v[i] << " ";
    }
    return 0;
}
    */