#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;
};

void Display(Node *head)
{
    while (head != NULL)
    {
        cout << head->value;
        if (head->Next != NULL)
            cout << " -> ";
        head = head->Next;//Update head if it will not get null
    }
    cout<<endl<<endl;
}
int main()
{
    Node *head = new Node(); //Create a Node type object follow the class rule.
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head->value = 1;
    second->value = 5;
    third->value = 8;
    fourth->value = 9;

    head->Next = second;
    second->Next = third;
    third->Next = fourth;
    fourth->Next = NULL;

    Display(head);

    return 0;
}