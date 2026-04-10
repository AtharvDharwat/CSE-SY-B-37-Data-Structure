#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    cout << value << " inserted into queue" << endl;
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue Underflow" << endl;
        return;
    }

    Node* temp = front;
    cout << temp->data << " removed from queue" << endl;
    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    delete temp;
}

void peek() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Front element is: " << front->data << endl;
    }
}

void display() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }

    Node* temp = front;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    peek();

    dequeue();
    display();

    return 0;
}
