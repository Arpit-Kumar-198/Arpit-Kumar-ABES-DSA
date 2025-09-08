#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1,5,3,7,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);        // here arr+n to sort complete array , if you give arr+n-1 , it will sort array except last element
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    sort(arr,arr+n,greater<int>()); //comparator function object
    for(int i : arr) cout << i << " ";
    return 0;
}