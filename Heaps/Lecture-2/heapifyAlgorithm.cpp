#include<bits/stdc++.h>
using namespace std;

void heapify(int i, vector<int>& arr, int n){
    while(true){
            int l = 2 * i;
            int r = 2 * i + 1;
            if(l >= n)
                break;
            if(r >= n){
                if(arr[i] > arr[l]){
                    swap(arr[l], arr[i]);
                    i = l;
                }
                break;
            }
            if (arr[l] < arr[r])
            {
                if(arr[i] > arr[l]){
                    swap(arr[l], arr[i]);
                    i = l;
                }
                else break;
            }
            else{
                if(arr[i] > arr[r]){
                    swap(arr[r], arr[i]);
                    i = r;
                }
                else break;
            }
        }
}
int main()
{
    vector<int> arr = {-1,10,2,14,11,1,4};
    int n = arr.size();
    n = n - 1;
    for (int i = n / 2; i >= 1; i--)
    {
        heapify(i,arr,arr.size());
    }
    for (int i = 1; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
        return 0;
}