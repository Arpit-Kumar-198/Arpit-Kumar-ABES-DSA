#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class DoublyLinkedList{
public:
    Node *h;
    Node *t;
    int length;
    DoublyLinkedList(){
        this->h = NULL;
        this->t = NULL;
        this->length = 0;
    }
    void insertAtHead(int val)
    {
        if(length == 0){
            Node *n = new Node(val);
            h = n;
            t = n;
            length++;
            return;
        }
        Node *n = new Node(val);
        n->next = h;
        h->prev = n;
        h = n;
        length++;
        return;
    }
    void insertAtTail(int val){
        if(length == 0){
            Node *n = new Node(val);
            h = n;
            t = n;
            length++;
            return;
        }
        Node *n = new Node(val);
        t->next = n;
        n->prev = t;
        t = n;
        length++;
        return;
    }
    void displayForward(){
        if(length == 0) {
            cout << "LinkedList is empty!" << endl;
            return;
        }
        Node *temp = h;
        
        while (temp)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
        return;
    }
    void displayBackward(){
        if(length == 0) {
            cout << "LinkedList is empty!" << endl;
            return;
        }
        Node *temp = t;
        
        while (temp)
        {
            cout << temp->val << "->";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
        return;
    }
    int size(){
        return length;
    }
    int head(){
        if(h)
            return h->val;
        else
            return -1;
    }
    int tail(){
        if(t)
            return t->val;
        else
            return -1;
    }
    void deleteAtHead(){
        if(length == 0){
            cout << "LinkedList is empty!" << endl;
            return;
        }
        
        Node *del = h;
        h = del->next;
        if(h){
            h->prev = NULL;
        }
        else
            t = h;
        delete del;
        length--;
        return;
    }
    void deleteAtTail(){
        if(length == 0){
            cout << "LinkedList is empty!" << endl;
            return;
        }

        Node *del = t;
        Node *temp = t->prev;
        if(temp) temp->next = NULL;
        else
            h = t = NULL;
        delete del;
        length--;
        return;
    }
    void insertAt(int val, int pos){
        if(pos > length+1 || pos < 1){
            cout << "Invalid position !" << endl;
            return;
        }
        if(pos == 1){
            insertAtHead(val);
            return;
        }
        if(pos == length+1){
            insertAtTail(val);
            return;
        }
        int k = 1;
        Node *temp = h;
        while (temp && k < pos-1){
            temp = temp->next;
            k++;
        }
        Node *n = new Node(val);
        n->next = temp->next;
        temp->next->prev = n;
        temp->next = n;
        n->prev = temp;
        length++;
        return;
    }
    void deleteAtPos(int pos){
        if(pos > length || pos < 1){
            cout << "Invalid position !" << endl;
            return;
        }
        if(pos == 1){
            deleteAtHead();
            return;
        }
        if(pos == length){
            deleteAtTail();
            return;
        }
        int k = 1;
        Node *temp = h;
        while (temp && k < pos-1){
            temp = temp->next;
            k++;
        }
        Node *del = temp->next;
        temp->next = del->next;
        del->next->prev = temp;
        length--;
        delete del;
        return;
    }
    bool isEmpty(){
        return length;
    }
};
int main()
{

    DoublyLinkedList ll;
    ll.insertAtHead(10);


    ll.displayForward();
    ll.displayBackward();

    ll.deleteAtTail();
    ll.displayForward();
    ll.displayBackward();

    return 0;
}