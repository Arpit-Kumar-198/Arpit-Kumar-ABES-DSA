#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    /*
        Given an integer array and an integer k where k<=size of array, We need to return the kth
largest element of the array.
    */
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x ;
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int p = 0, max = INT_MIN, i = 0;
    while(p != k)
    {
        if(v[i] != v[i+1])
        {
            max = v[i];
            i++,p++;
        }
        else i++;
    }
    cout << max;
    return 0;
}