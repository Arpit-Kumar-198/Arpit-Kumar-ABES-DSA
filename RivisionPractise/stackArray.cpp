#include<iostream>
#include<vector>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val)
    {
        this->val = val;
        next = NULL;
    }
};
class stack
{
public:

    int size;
    node* head;
    stack()
    {
        size = 0;
        head = NULL;
    }
    void push(int val){
        node* temp = new node(val);
        if(head==NULL){
            head = temp;
            size++;
            return;
        }
        temp->next = head;
        head = temp;
        size++;
        return;
    }
    void pop(){
        if(head==NULL){
            cout << "Stack is empty!";
            return;
        }
        head = head->next;
        size--;
        return;
    }
    void show(){
        node *temp = head;
        if(head == NULL){
            cout << "Stack is empty!";
            return;
        }
        while(temp!=NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        return;
    }
    int top(){
        if(head == NULL){
            cout << "Stack is empty! ";
            return -1; 
        }
        return head->val;
    }
};
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.show();
    cout << endl;
    cout << st.top() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    
   
    st.show();
    cout << endl;
    cout << st.top() << endl;

    return 0;
}