#include<iostream>
#include<vector>
using namespace std;
void subset(vector<int>& arr, vector<int> temp, int idx, bool flag)
{
    if(idx==arr.size()){
        for(int i : temp)
            cout << i << " ";
        cout << endl;
        return;
    }
    if(idx==arr.size()-1){
        if(flag==true) subset(arr, temp, idx + 1,true);
        temp.push_back(arr[idx]);
        subset(arr, temp, idx + 1,true);
    }
    else if(idx!=arr.size()-1 && arr[idx]==arr[idx+1]){
        if(flag==true) subset(arr, temp, idx + 1,true);
        temp.push_back(arr[idx]);
         subset(arr, temp, idx + 1,false);
    }
    else{
        if(flag==true) subset(arr, temp, idx + 1,true);
        temp.push_back(arr[idx]);
         subset(arr, temp, idx + 1,true);
    }
    
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> temp;
    subset(arr,temp,0, true);
    return 0;
}