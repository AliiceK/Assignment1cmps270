#include <iostream>
#include <cstdlib>
using namespace std;

#define SIZE 10
template <typename T> 
class Stack {
    T *arr;
    int top;
    int capacity[SIZE];

public:
    Stack() { top = -1; }
    bool empty();
    void push(const T &item);
    T top();
    void pop();
};


bool Stack::empty() {
    return top == -1;
}

void Stack::push(T value) {
    if (top >= (SIZE-1)) {
        cout<<"Stack overflow!!!";

    } else {
        Stack[++top] = value;
        cout<< value <<endl;
    }
}

void pop() {
    if (top < 0) {
        System.out.println("Stack Underflow");

    } else {
        int x = a[top];
    }
}


int main() {
    Stack s = new Stack();
    s.push(10);
}