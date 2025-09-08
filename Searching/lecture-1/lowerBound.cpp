#include<iostream>
#include<vector>
using namespace std;
int main(){
    // find lower bound and upper bound of target .
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int tgt;
    cin >> tgt;
    bool flag = true;
    int low = 0, high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(v[mid] == tgt)
        {
            flag = false;
            cout << "lower bound : " << v[mid-1] << endl << "upper bound : " << v[mid+1];
            break;
        }
        else if(v[mid] < tgt) low = mid + 1;
        else high = mid - 1;
    } 
    if(flag == true) cout << "lower bound : " << v[high] << endl << "upper bound : " << v[low];
    return 0;
}