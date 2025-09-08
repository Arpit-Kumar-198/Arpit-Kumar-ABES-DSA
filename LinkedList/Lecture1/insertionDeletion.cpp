#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class Linkedlist {
public:
    Node* head;
    Node* tail;
    int size;

    Linkedlist() {
        head = tail = NULL;
        size = 0;
    }

    void insertAtBegin(int val) {
        Node* temp = new Node(val);
        if (size == 0) head = tail = temp;
        else {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtEnd(int val) {
        Node* temp = new Node(val);
        if (size == 0) head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insert(int val, int pos) {
        if (pos < 1 || pos > size + 1) {
            cout << "Invalid position!\n";
            return;
        }

        if (pos == 1) {
            insertAtBegin(val);
            return;
        } 
        if (pos == size + 1) {
            insertAtEnd(val);
            return;
        }

        Node* temp = new Node(val);
        Node* t = head;
        int p = 1;
        while (p != pos - 1) {
            t = t->next;
            p++;
        }
        temp->next = t->next;
        t->next = temp;
        size++;
    }

    void deleteAtBegin() {
        if (size == 0) {
            cout << "List is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp; // Free memory
        if (head == NULL) tail = NULL; // If list becomes empty
        size--;
    }

    void deleteAtEnd() {
        if (size == 0) {
            cout << "List is empty\n";
            return;
        }
        if (size == 1) {
            delete tail;
            head = tail = NULL;
            size = 0;
            return;
        }

        Node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }

        delete tail;  // ✅ Free only `tail`, do NOT delete `temp`
        tail = temp;
        tail->next = NULL;
        size--;
    }

    void deleteFrom(int pos) {
        if (pos < 1 || pos > size) {
            cout << "Invalid position\n";
            return;
        }
        if (size == 0) {
            cout << "List is empty\n";
            return;
        }
        if (pos == 1) {
            deleteAtBegin();
            return;
        }
        if (pos == size) {
            deleteAtEnd();
            return;
        }

        Node* temp = head;
        int p = 1;
        while (p != pos - 1) {
            temp = temp->next;
            p++;
        }

        Node* t = temp->next;
        temp->next = t->next;
        delete t;  // ✅ Correct memory deletion
        size--;
    }

    void display() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    ~Linkedlist() {
        Node* temp;
        while (head != NULL) {
            temp = head;
            head = head->next;
            delete temp;  // ✅ Free memory safely
        }
        tail = NULL; // ✅ Prevent dangling pointer
    }
};

int main() {
    Linkedlist ll;
    int n;
    cout << "Enter no. of nodes: ";
    cin >> n;
    cout << "Enter values of nodes: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ll.insertAtEnd(x);
    }

    ll.display();

    ll.insertAtBegin(50);
    ll.display();

    ll.insert(5, 2);
    ll.display();

    ll.deleteAtBegin();
    ll.deleteAtEnd();
    ll.display();

    ll.deleteFrom(2);
    ll.display();

    ll.deleteFrom(2);
    ll.display();

    return 0;
}
