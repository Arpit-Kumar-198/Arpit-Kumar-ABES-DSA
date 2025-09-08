#include<bits/stdc++.h>
using namespace std;
class MinHeap{
public:
    int arr[50];
    int idx;
    MinHeap(){
        idx = 1;
    }
    int top(){
        return arr[1];
    }
    int size(){
        return idx - 1;
    }
    void push(int val){
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

int main()
{
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(30);
    pq.push(40);
    pq.push(12);
    pq.push(4);
    pq.push(7);
    pq.push(2);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    cout << "Heap elements : ";
    for (int i = 1; i <= pq.size(); i++)
        cout << pq.arr[i] << " ";
    return 0;
}