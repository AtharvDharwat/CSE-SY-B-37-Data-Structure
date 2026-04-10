#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* top = NULL;

void push(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << value << " pushed into stack" << endl;
}

void pop() {
    if (top == NULL) {
        cout << "Stack Underflow" << endl;
        return;
    }

    Node* temp = top;
    cout << temp->data << " popped from stack" << endl;
    top = top->next;
    delete temp;
}

void peek() {
    if (top == NULL) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Top element is: " << top->data << endl;
    }
}

void display() {
    if (top == NULL) {
        cout << "Stack is empty" << endl;
        return;
    }

    Node* temp = top;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    peek();

    pop();
    display();

    return 0;
}

