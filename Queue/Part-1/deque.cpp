#include<iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

// Deque class
class Deque {
private:
    Node* front;
    Node* rear;

public:
    Deque() {
        front = rear = NULL;
    }

    // Insert at front
    void insertFront(int val) {
        Node* newNode = new Node(val);
        if (front == NULL) {
            front = rear = newNode;
        } else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }

    // Insert at rear
    void insertRear(int val) {
        Node* newNode = new Node(val);
        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
    }

    // Delete from front
    void deleteFront() {
        if (front == NULL) {
            cout << "Deque is empty.\n";
            return;
        }

        Node* temp = front;
        front = front->next;
        if (front)
            front->prev = NULL;
        else
            rear = NULL;

        delete temp;
    }

    // Delete from rear
    void deleteRear() {
        if (rear == NULL) {
            cout << "Deque is empty.\n";
            return;
        }

        Node* temp = rear;
        rear = rear->prev;
        if (rear)
            rear->next = NULL;
        else
            front = NULL;

        delete temp;
    }

    // Display deque from front to rear
    void display() {
        Node* temp = front;
        if (temp == NULL) {
            cout << "Deque is empty.\n";
            return;
        }

        cout << "Deque: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Get front and rear values
    int getFront() {
        if (front) return front->data;
        cout << "Deque is empty.\n";
        return -1;
    }

    int getRear() {
        if (rear) return rear->data;
        cout << "Deque is empty.\n";
        return -1;
    }
};

int main() {
    Deque dq;

    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.insertFront(2);
    dq.display();  // Output: Deque: 2 5 10 20

    dq.deleteFront();
    dq.display();  // Output: Deque: 5 10 20

    dq.deleteRear();
    dq.display();  // Output: Deque: 5 10

    cout << "Front: " << dq.getFront() << endl;  // Output: 5
    cout << "Rear: " << dq.getRear() << endl;    // Output: 10

    return 0;
}
