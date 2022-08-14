#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *Next = NULL;

    // constructor creation
    Node(int value)
    {
        val = value;
        Next = NULL;
    }
};
void InsertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);

    newNode->Next = head;

    head = newNode;
}

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
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->val;
        if (head->Next != NULL)
            cout << "->";
        head = head->Next;
    }
    cout << endl
         << endl;
}
int main()
{
    Node *head = NULL;

    int n;

    cout << "Choice 1: Insertion of Head: "
         << "Choice 2: Insertion of Tail: "
         << "Choice 3: Exit" << endl;

    int choice = 2;
    while (choice == 1 || choice == 2)
    {
        cout << "Enter the value:";
        cin >> n;
        if (choice == 1)
            InsertAtHead(head, n);
        else if (choice == 2)
            InsertAtTail(head, n);
        cout << "Next choice: ";
        cin >> choice;
    }
    display(head);
    return 0;
}