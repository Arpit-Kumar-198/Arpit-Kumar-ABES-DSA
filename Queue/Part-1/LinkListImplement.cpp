#include<iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Queue class
class Queue {
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = NULL;
    }

    // Enqueue operation
    void enqueue(int value) {
        Node* newNode = new Node(value);

        if (rear == NULL) {
            front = rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;
    }

    // Dequeue operation
    void dequeue() {
        if (front == NULL) {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }

        Node* temp = front;
        front = front->next;

        // If queue becomes empty
        if (front == NULL)
            rear = NULL;

        delete temp;
    }

    // Peek at the front element
    int peek() {
        if (front == NULL) {
            cout << "Queue is empty.\n";
            return -1;
        }
        return front->data;
    }

    // Display the queue
    void display() {
        Node* temp = front;
        if (temp == NULL) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Queue: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();  // Output: Queue: 10 20 30

    q.dequeue();
    q.display();  // Output: Queue: 20 30

    cout << "Front element: " << q.peek() << endl;  // Output: 20

    return 0;
}
