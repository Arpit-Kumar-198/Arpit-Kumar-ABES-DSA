#include<iostream>
#include<vector>
using namespace std;
class MaxHeap{
public:
    vector<int> arr;
    int idx;
    MaxHeap(int capacity){
        idx = 1;
        vector<int> t(capacity + 1, 0);
        arr = t;
    }
    int size(){
        return idx - 1;
    }
    int top(){
        return arr[1];
    }
    void push(int val){
        if(idx >= arr.size()){
            cout << "Heap is full" << "\n";
            return;
        }
        arr[idx] = val;
        int i = idx;
        idx++;
        while(i != 1){
            int parent = i / 2;
            if(arr[i] > arr[parent]){
                swap(arr[i], arr[parent]);
                i = parent;
            }
            else break;
        }
    }
    void pop(){
        if(idx == 1){
            cout << "Heap is empty";
        }
        idx--;
        arr[1] = arr[idx];
        int i = 1;

        while (true)
        {
            int l = 2 * i;
            int r = 2 * i + 1;
            if(l > idx-1)
                break;
            if(r > idx-1){
                if(arr[i] < arr[l]){
                    swap(arr[i], arr[l]);
                    i = l;
                }
                else
                    break;
            }
            if (arr[l] > arr[r])
            {
                if(arr[i] < arr[l]){
                    swap(arr[i], arr[l]);
                    i = l;
                }
                else
                    break;
            }
            else{
                if(arr[i] < arr[r]){
                    swap(arr[i], arr[r]);
                    i = r;
                }
                else
                    break;
            }
        }
    }
    void display(){
        for (int i = 1; i < idx; i++)
            cout << arr[i] << " ";
    }
};
int main()
{
    MaxHeap pq(8);
    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(30);
    pq.push(40);
    pq.push(12);
    pq.push(4);
    pq.push(7);
    pq.push(2);

    pq.display();

    return 0;
}