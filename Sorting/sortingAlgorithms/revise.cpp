#include<iostream>
#include<climits>
using namespace std;
void merge(int arr[], int n, int lo,int mid , int hi){
    int n1 = mid - lo + 1;
    int n2 = hi - mid;
    int left[n1];
    int right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = arr[lo + i];
    for (int i = 0; i < n2; i++)
        right[i] = arr[mid+1+i];

    int i = 0, j = 0, k = lo;
    while(i < n1 && j < n2){
        if(left[i] < right[j]){
            arr[k] = left[i];
            k++, i++;
        }
        else{
            arr[k] = right[j];
            k++, j++;
        }
    }
    while(i < n1){
        arr[k] = left[i];
            k++, i++;
    }
     while(j < n2){
        arr[k] = right[j];
            k++, j++;
    }
}
void mergeSort(int arr[], int n, int lo, int hi){
    if(lo < hi){
        int mid = lo + (hi - lo) / 2;
        mergeSort(arr, n, lo, mid);
        mergeSort(arr, n, mid+1, hi);

        merge(arr, n, lo, mid, hi);
    }
    return;
}
int main(){
    int arr[8] = {8, 3,7,3,1,4,0,2};
    int n = 8;
    mergeSort(arr, n, 0, n - 1);
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}