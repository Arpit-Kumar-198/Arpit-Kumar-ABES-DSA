#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
    int f;
    int b;
    vector<int> arr;
    Queue(int val){
        f = 0;
        b = 0;
        vector<int> v(val);
        arr=v;
    }

    void push(int val){
        if(b==arr.size()) {
            cout <<  "Queue is full\n";
            return;
        }
        arr[b] = val;
        b++;
    }
    void pop(){
        if(b-f==0){
            cout << "Queue is empty\n";
            return;
        }
        f++;
    }
    int front(){
        if(b-f==0){
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(b-f==0){
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return b-f;
    }
    bool empty(){
        if(b-f == 0) return true;
        else return false;
    }
    void display(){
        if(b-f==0){
            cout << "Queue is empty\n";
            return;
        }
        for(int i = f; i < b; i++) cout << arr[i] << " ";
        cout  << endl;
    }
};
int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    q.display();
    q.pop();
    q.display();

    cout << "f : " << q.front() << endl << "b : " << q.back() << endl;
    cout << "Size : " << q.size() << endl;

   
    return 0;
}