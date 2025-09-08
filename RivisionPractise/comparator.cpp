#include<iostream>
#include<algorithm>
using namespace std;
bool comparator(int p1 , int p2){
    if(p1>p2)
        return true;
    return false;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n, comparator);
    sort(arr, arr + n, greater<int> ());
    for(int val : arr)
        cout << val << " ";
}