/*
    kth smallest element
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    
    cin >> n;
    vector<int> a(n);
   
    for(int i = 0; i < n; i++) cin >> a[i];
    int k;
    
    cin >> k;
    
    sort(a.begin(),a.end());
        
    int p = 0, i = 0, ans = a[0];
    while(p != k && i < n){
        if(a[i]!=a[i+1]){
            ans = a[i];
            p++;
        }
        i++;
    }
    if(p!=k) {
        if(k==2) cout << "There is no 2nd smallest element.";
        else if(k==3) cout << "There is no 3rd smallest element.";
        else cout << "There is no " << k << "th element.";
    }
    else cout << ans;
   
    return 0;
}