#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;

    // Constructor creation
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};

void InsertTail(Node *&head, int val)
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

void insertAtHead(Node *&head, int val)
{
    // s11:New node creation
    Node *newNode = new Node(val);
    // s2:Update of newNode->Next
    newNode->Next = head;
    // s3: Update of head
    head = newNode;
}

void Display(Node *head)
{
    while (head != NULL)
    {
        cout << head->value;
        if (head->Next != NULL)
            cout << " -> ";
        head = head->Next; // Update head if it will not get null
    }
    cout << endl
         << endl;
}
int main()
{
    Node *head = NULL; // Node type object

    int n;
    // Choice 1: Insertion of Head
    // Choice 2: Insertion of Tail
    cout << "Choice 1: Insertion of Head"
         << "Choice 2: Insertion of Tail" << endl
         << "Choice 3: Exit" << endl;
    int choice = 1;
    while (choice == 1 || choice == 2)
    {
        cout << "Enter the value: ";
        cin >> n;
        if (choice == 1)
            insertAtHead(head, n);
        else if (choice == 2)
            InsertTail(head, n);
        cout << "Next Choice: ";
        cin >> choice;
    }

    // InsertTail(head,1);
    // InsertTail(head,5);
    // InsertTail(head,8);
    // InsertTail(head,9);
    // InsertTail(head,10);
    // Node *second = new Node();
    // Node *third = new Node();
    // Node *fourth = new Node();

    // head->value = 1;
    // second->value = 5;
    // third->value = 8;
    // fourth->value = 9;

    // head->Next = second;
    // second->Next = third;
    // third->Next = fourth;
    // fourth->Next = NULL;

    Display(head);

    return 0;
}