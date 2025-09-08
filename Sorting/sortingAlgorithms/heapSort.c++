#include<iostream>
#include<vector>
using namespace std;
void maxheapify(vector<int>& v, int n , int i){
    int largest = i, left = 2*i+1, right = 2*i+2;
    if(left < n && v[left] > v[largest]) largest = left;
    if(right < n && v[right] > v[largest]) largest = right;
    if(largest != i){
        swap(v[i],v[largest]);
        maxheapify(v,n,largest);
    }
}
void buildHeap(vector<int>& v, int size)
{
    for(int i = (size-2)/2; i >= 0; i--)
    maxheapify(v,size,i);
}
void heapSort(vector<int>& v, int size)
{
    buildHeap(v,size);
    for(int i = size-1; i >= 1; i--)
    {
        swap(v[0],v[i]);
        maxheapify(v,i,0);
    }
}
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements in array : ";
    for(int i = 0; i < n; i++) cin >> v[i];

    heapSort(v,n);

    cout << "Sorted array : ";
    for(int i = 0; i < n; i++) cout << v.at(i) << " ";
    return 0;
}