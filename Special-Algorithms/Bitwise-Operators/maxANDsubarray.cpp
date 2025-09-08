// find the max size of a subarray of a array having maximum AND operation value
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    // x & x = x otherwise value will always be small 
    int n;
    cin >> n;
    int a[n];
    
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i]>max) max = a[i];
    }
    int i = 0,j = 0;

    int ans = 0;
    bool flag = true;
    while(j < n && flag == true)
    {
        if(a[j] == max)
        {
            while(a[j]==max) j++;
            ans = j-i;
            flag = false;
            break;
        }
        else i++,j++;
    }

    cout << ans;
    return 0;
}