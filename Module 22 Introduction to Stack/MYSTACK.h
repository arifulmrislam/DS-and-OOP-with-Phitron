#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    // Construct of Node;
    Node(int val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};

class Stack
{
    Node *head;
    Node *top;
    int count = 0;

public:
    // Construct of Stack
    Stack()
    {
        head = NULL;
        top = NULL;
    }

    // PUSH
    void push(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }
        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        count++;
    }
    // POP
    int pop()
    {
        Node *delNode;
        delNode = top;
        int chk = -1;
        // There is no element is the stack.
        if (head == NULL)
        {
            cout << "Stack is underflow" << endl;
            return chk;
        }
        if (top == head) // There is one element.
        {
            top = head = NULL;
        }
        else // There is more than 1 element.
        {
            top = delNode->prev;
            top->next = NULL;
        }
        chk = delNode->value;
        delete delNode;
        count--;
        return chk;
    }
    // EMPTY
    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // SIZE
    int size()
    {
        return count;
    }
    // TOP
    int Top()
    {
        int chk;
        if (top == NULL)
        {
            cout << "Stack is UnderFlow || There is no element in Top" << endl;
            chk = -1;
        }
        else
        {
            chk = top->value;

            return chk;
        }
    }
};
