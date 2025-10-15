#include <bits/stdc++.h>
using namespace std;

bool valid(int x, int y, int z) {
    
    if(x%z != 0 && y%z != 0) return true;
    return false;
}

int main() {
   
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.rbegin(),a.rend());
       
        int z = a[0];
        
        bool flag = true;
        for(int i = 1; i < n; i++){
            if(a[i] != a[i-1]) {
                flag = false;
                break;
            }
        }
        if(flag == true) cout << a[0]-1 << endl;
        else{
            while(z > 0 && !valid(a[0],a[1],z)){
                z--;
            }
            cout << z << endl;
        }
        
        
    }
    
    return 0;
}