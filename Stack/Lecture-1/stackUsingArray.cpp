#include<iostream>
#include<stack>
using namespace std;
class Stack{
public:
    int arr[5];
    int idx;
    Stack(){
        idx = -1;
    }
    void push(int val){
        if(idx==4){
            cout << "Stack overflow\n";
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx==-1){
            cout << "Stack is empty\n";
            return;
        }
        idx--;
    }
    int top(){
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << st.size() << endl;

    st.pop();       
    cout << st.size() << endl;
    cout << st.top();
    return 0;
}
// we can also use vector for unlimited size stack