#include<iostream>
using namespace std;
class node{
public:
    int val;
    node *next;
    node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Linkedlist{
public:
    node *head;
    Linkedlist(){
        this->head = NULL;
    }
    void insertAtBegin(int val){
        node *newNode = new node(val);
        if (head == NULL){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    void insertAtEnd(int val){
        node *newNode = new node(val);
        if (head == NULL){
            head = newNode;
            return;
        }
        node *temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void deleteAtEnd(){
        if(head==NULL){
            cout << "List is empty";
            return;
        }
        else if(head->next == NULL){
            node *t = head;
            head = head->next;
            delete t;
            return;
        }
        node *t = head;
        while(t->next->next!=NULL){
            t = t->next;
        }
        node *del = t->next;
        t->next = NULL;
        delete del;
    }
    void deleteAtBegin(){
        if(head==NULL){
            cout << "List is empty";
            return;
        }
        node *t = head;
        head = head->next;
        delete t;
    }

    void display(){
        if(head == NULL){
            cout << "List is empty";
            return;
        }
        node *temp = head;
        while(temp){
            if(temp->next!=NULL)
                cout << temp->val << "->";
            else
                cout << temp->val;
            temp = temp->next;
        }
    }
};
int main()
{
    int n;
    cout << "Enter no of nodes : ";
    cin >> n;
    Linkedlist ll;
    cout << "Enter the values of nodes : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ll.insertAtEnd(x);
    }
    ll.deleteAtBegin();
    ll.display();
    cout << endl;
    ll.deleteAtEnd();
     ll.deleteAtEnd();
      ll.deleteAtEnd();
      ll.deleteAtEnd();
    
    ll.display();
    return 0;
}