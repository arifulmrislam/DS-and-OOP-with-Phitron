#include <bits/stdc++.h>
using namespace std;

template<typename N>class Node
{
public:
    N value;
    Node *next;
    Node *prev;

    // Construct of Node;
    Node(N val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};

//Stack st;
template<typename S>class Stack
{
    Node<S> *head;
    Node<S> *top;
    int count = 0;

public:
    // Construct of Stack
    Stack()
    {
        head = NULL;
        top = NULL;
    }

    // PUSH
    void push(S val)
    {
        Node<S> *newNode = new Node<S>(val);
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
    S pop()
    {
        Node<S> *delNode;
        delNode = top;
        S chk;
        // There is no element is the stack.
        if (head == NULL)
        {
            //cout << "Stack is underflow" << endl;
            cout<<"Stack Underflow "<<endl;
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
    S Top()
    {
        S chk;
        if (top == NULL)
        {
            cout << "Stack is UnderFlow || There is no element in Top" << endl;
        }
        else
        {
            chk = top->value;

            return chk;
        }
    }
}; 