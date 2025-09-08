#include<iostream>
#include<stack>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(){
        next = NULL;
    }
};

class mystack{
public:
    Node* head;
    int s;
    mystack(){
        s = 0;
        head=NULL;
    }
    void push(int val){
        Node* temp = new Node();
        temp->val = val;
        temp->next = head;
        head = temp;
        s++;
    }
    void pop(){
        if(head==NULL){
            cout << "Stack is empty\n";
            return;
        }
        head=head->next;
        s--;
    }
    int top(){
        if(head==NULL){
            cout << "Stack is empty\n";
            return -1;
        }
        return head->val;
    }
    int size(){
        return s;
    }
    void show(){
        if(head==NULL){
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
};
    


int main(){
    mystack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << st.size() << endl;

    st.pop();       
    cout << st.size() << endl;
    cout << st.top() << endl;
    st.show();
    return 0;
}
