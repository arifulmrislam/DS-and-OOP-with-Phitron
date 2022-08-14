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


void InsertAtTail(Node *&head, int val);
void InsertAtHead(Node *&head, int val);
void display(Node *n);
int countLength(Node *&head);

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

int countLength(Node * &head){
    int count = 0;
    Node *temp = head;
    while(temp != NULL){
        count++;
        temp=temp->Next;
    }
    return count;
}

int main()
{

    Node *head = NULL; // Create a Node type object follow the class rule.

    int n;

    cout << "Choice 1: Insertion of Head: "
         << "Choice 2: Insertion of Tail: " << endl
         << "Choice 0: Exit" << endl
         <<endl;
    cout<<"Next Choice: ";
    int choice;
    cin>>choice;
    while (choice != 0)
    {
        cout << "Enter the value: ";
        cin >> n;
        switch (choice)
        {
        case 1:
            InsertAtHead(head, n);
            break;
        case 2:
            InsertAtTail(head, n);
            break;
        default:
            break;
        }

        cout << "Next choice:";
        cin >> choice;
    }
    cout<<"Linked List: ";
    display(head);
    cout<<"Length of linked list: "<<countLength(head)<<endl;
    return 0;
}