#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next = NULL;

    // constructor creation
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};
void InsertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;

    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}

void InsertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);

    newNode->Next = head;

    head = newNode;
}

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->value;
        if (head->Next != NULL)
            cout << "->";
        head = head->Next;
    }
    cout << endl
         << endl;
}
int main()
{

    Node *head = NULL; // Create a Node type object follow the class rule.

    int n;

    cout << "Choice 1: Insertion of Head: "
         << "Choice 2: Insertion of Tail: " << endl
         << "Choice 3: Exit"<<endl;
    int choice = 2;
    while (choice == 1 || choice == 2)
    {
        cout << "Enter the value: ";
        cin >> n;
        if (choice == 1)
            InsertAtHead(head, n);
        else if (choice == 2)
            InsertAtTail(head, n);
        cout << "Next choice:";
        cin >> choice;
    }

    display(head);
    return 0;
}