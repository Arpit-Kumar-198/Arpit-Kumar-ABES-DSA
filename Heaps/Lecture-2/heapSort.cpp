#include<bits/stdc++.h>
using namespace std;
class MinHeap{
public:
    vector<int> arr;
    int idx;
    MinHeap(int capacity){
        idx = 1;
        vector<int> t(capacity + 1, 0);
        arr = t;
    }
    int top(){
        return arr[1];
    }
    int size(){
        return idx - 1;
    }
    void push(int val){
        if(idx >= arr.size()){
            cout << "Heap is full" << endl;
            return;
        }
        arr[idx] = val;
        int i = idx;
        idx++;
        // swapping of i with parent till i != 1
        while(i!=1){
            int parent = i / 2;
            if(arr[i] < arr[parent]){
                swap(arr[i], arr[parent]);
                i = parent;
            }
            else
                break;
        }
    }
    void pop(){
        if(idx == 1){
            cout << "Heap is empty" << "\n";
        }
        idx--;
        arr[1] = arr[idx];
        int i = 1;
        while(true){
            int l = 2 * i;
            int r = 2 * i + 1;
            if(l > idx-1)
                break;
            if(r > idx-1){
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
};

void heapSort(vector<int>& arr){
    MinHeap pq(arr.size()+1);
    for (int i = 0; i < arr.size(); i++){
        pq.push(arr[i]);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = pq.top();
        pq.pop();
    }
}
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements is array : ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    heapSort(nums);
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    
    return 0;
}