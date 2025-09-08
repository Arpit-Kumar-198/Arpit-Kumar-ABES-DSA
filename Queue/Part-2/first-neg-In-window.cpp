//  first negative ini each window of size k 
#include<iostream>
#include<queue>
#include<vector>
using namespace std;


int main(){
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    queue<int> q;
    vector<int> arr(n);
    cout << "Enter elements in array : ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i]<0) q.push(i);
    }
    int k;
    cout << "Enter size of window : ";
    cin >> k;
    
    vector<int> ans;
    int i = 0;
    while(i<=n-k){
        while(q.size()!=0 && q.front()<i) q.pop();
        if(q.size()!=0 && q.front()>=i+k){
            ans.push_back(0);
            i++;
        }
        else if(q.front()>=i && q.front()<i+k) {
            ans.push_back(arr[q.front()]);
            i++;
        }
        
    }
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }


    return 0;
}
