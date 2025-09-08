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
void quickSort(int a[], int lo, int hi)
{
    if(lo < hi)
    {
        int pi = partition(a,lo,hi);
        quickSort(a,lo,pi-1);
        quickSort(a,pi+1,hi);
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
    quickSort(a,0,n-1);
    cout << "Sorted array : ";
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}