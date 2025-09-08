/*
    kth smallest element using quick sort
*/
#include<iostream>
using namespace std;
int partition(int a[], int lo, int hi)
{
    int pivot = a[hi];
    int i = lo - 1;

    for(int j = lo; j < hi; j++)
    {
        if(a[j] < pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[hi]);
    return i+1;

}
int quickSort(int a[], int lo, int hi, int k)
{
    if(lo < hi)
    {
        int pi = partition(a,lo,hi);
        if(pi+1 == k) return a[pi];
        else if(pi+1 > k) return quickSort(a,lo,pi-1,k);
        else return quickSort(a,pi+1,hi,k);
    }
}
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int a[n];
    cout << "Enter elements in array : ";
    for(int i = 0; i < n; i++) cin >> a[i];
    int k;
    cout << "Enter k : ";
    cin >> k;
    cout << quickSort(a,0,n-1,k);
   
    return 0;
}