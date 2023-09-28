// Q2. Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using
// Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not
// given, allocate stack of size 5.
// Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().

#include <iostream>
using namespace std;

class Stack
{
private:
    int element;
    int *arr;
    int top;
    int size;

public:
    // Stack()

    // {
    //     this->top=-1;
    //     this->size=5;
    //     this->arr = new int[this->size];
    // }
    Stack(int size)
    {
        this->top = -1;
        this->size = size;
        this->arr = new int[this->size];
    }
    void push()
    {
        if (top == this->size - 1)
        {
            cout << "Stack is full " << endl;
        }
        else
        {
            top++;
            cout << "enter the element" << endl;
            cin >> this->element;
            this->arr[top] = this->element;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        cout << "element to be poped=";
        cout << "arr[" << top << "]=" << arr[top] << endl;
        arr[top] = 0;
        top--;
    }
    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
            cout << "element at top ="
                 << " [" << top << "]  :" << arr[top] << endl;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << " elemnets at "
                 << "[ " << i << " ]"
                 << " : " << arr[i] << endl;
        }
    }
};

enum Emenu
{
    EXIT,
    PUSH_ELEMENT,
    PEEK_ELEMENT,
    POP_ELEMENT,
    PRINT_STACK
};

Emenu menu()
{
    int choice;
    cout << "******************************************" << endl;
    cout << "select any choice" << endl;
    cout << "0.exit" << endl;
    cout << "1. for push element" << endl;
    cout << "2.for peek element" << endl;
    cout << "3.for pop the element" << endl;
    cout << "4.printing stack" << endl;
    cin >> choice;
    cout << "***********************************************" << endl;
    return Emenu(choice);
}

int main()
{
    Emenu choice;
    Stack s1(5);
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case PUSH_ELEMENT:
            s1.push();
            break;

        case PEEK_ELEMENT:
            s1.peek();
            break;

        case POP_ELEMENT:
            s1.pop();
            break;

        case PRINT_STACK:
            s1.print();
            break;

        default:
            cout << "enter valid choice" << endl;
            break;
        }
    }
    return 0;
}
