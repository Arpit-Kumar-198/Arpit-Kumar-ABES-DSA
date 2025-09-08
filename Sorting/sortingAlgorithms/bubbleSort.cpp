#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // time complexity = O(n^2)
   // best case = O(n)
    int n;
    cout << "enter the size of array : ";
    cin >> n;
    cout << "enter elements : ";
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int p = 0; p < n-1; p++)
    {
        bool flag = true;
        for(int s = 0; s < n-p-1; s++)
        {
            if(v[s] > v[s+1])
            {
                int t = v[s];
                v[s] = v[s+1];
                v[s+1] = t;
                flag = false;
            }
        }
        if(flag == true)  break;

    }
    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}