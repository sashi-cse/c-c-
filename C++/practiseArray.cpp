#include <iostream>
using namespace std;

#define MAX_SIZE 1000 // Maximum size of the stack

class Stack {
private:
    int top; // Index of the top element
    int arr[MAX_SIZE]; // Array to store stack elements

public:
    Stack() {
        top = -1; // Initialize top to -1 (empty stack)
    }

    bool push(int x) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack Overflow: Cannot push more elements.\n";
            return false;
        }
        arr[++top] = x;
        return true;
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow: Cannot pop from an empty stack.\n";
            return -1; // Return a sentinel value
        }
        return arr[top--];
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is empty.\n";
            return -1; // Return a sentinel value
        }
        return arr[top];
    }

    bool isEmpty() {
        return (top == -1);
    }
};              

int main() {
    Stack myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Top element: " << myStack.peek() << endl;

    while (!myStack.isEmpty()) {
        cout << myStack.pop() << " ";
    }

    return 0;
}