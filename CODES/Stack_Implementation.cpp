#include <iostream>
using namespace std;
int MAX = 5;
int stackArr[5];
int top = -1;

bool isFull(){
    return top == MAX -1;
}

bool isEmpty(){
    return top == -1 ;
}

void push(int value){
    if(isFull()){
        cout << "Stack Overflow!" << endl;
        return;
    }
    top++;
    stackArr[top] = value;
    cout << value << " pushed into stack" << endl;
}

int pop(){
    if(isEmpty()){
        cout << "Stack Underflow!" << endl;
        return -1;
    }
    int poppedValue = stackArr[top];
    top --;
    return poppedValue;
}

int peek(){
    if(isEmpty()){
        cout << "Stack is empty!" << endl;
        return -1;
    }
    return stackArr[top];
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    cout << "Top Element is: " << peek() << endl;
    return 0;
}    