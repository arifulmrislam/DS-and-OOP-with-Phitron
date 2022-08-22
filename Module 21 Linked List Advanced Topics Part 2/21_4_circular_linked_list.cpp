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

struct Test
{
    int position[1000];
};
void InsertAtTail(Node *&head, int val);
void InsertAtHead(Node *&head, int val);
void display(Node *n);
int countLength(Node *&head);
void deletionAtHead(Node *&head);
void deletionAtTail(Node *&head);
void deletionAtSpecificPosition(Node *&head, int position);
void deletionByValueUnique(Node *&head, int val);

int findMid(Node *&head);

void InsertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        newNode->Next = head;
        return;
    }
    Node *temp = head;

    while (temp->Next != head)
    {
        temp = temp->Next;
    }
    newNode->Next = head; // newNode->Next = temp->Next
    temp->Next = newNode;
}

void InsertAtHead(Node *&head, int val)
{
    // S1: newNode creation
    Node *newNode = new Node(val);
    // s2:: Update of newNode->Next
    newNode->Next = head;
    // s3: Update the tail with New head
    if (head == NULL)
    {
        head = newNode;
        newNode->Next = head;
        return;
    }
    Node *temp = head;
    while (temp->Next != head)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
    // Update of head
    head = newNode;
}

void display(Node *head)
{
    if (head == NULL)
    {
        cout << "The linked list is empty" << endl;
        return;
    }
    Node *temp = head;

    do
    {
        cout << temp->value;
        temp = temp->Next;
        if (temp != head)
            cout << " -> ";
    } while (temp != head);
    cout << endl;
}

int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    do
    {
        count++;
        temp = temp->Next;
    } while (temp != head);
    return count;
}
void insertionAtSpecificPosition(Node *&head, int pos, int val)
{
    int i = 0;
    Node *temp = head;

    while (i < pos - 2)
    {
        temp = temp->Next;
        i++;
    }
    Node *newNode = new Node(val);
    newNode->Next = temp->Next;
    temp->Next = newNode;
}
void deletionAtHead(Node *&head)
{
    Node *temp = head;
    if (temp != NULL)
    {
        Node *delNode = temp;
        while (temp->Next != head)
        {
            temp = temp->Next;
        }
        temp->Next=delNode->Next;
        head=delNode->Next;
        delete delNode;
    }
    else
    {
        cout << "There is no value in the Linked list" << endl;
    }
}
void deletionAtTail(Node *&head)
{
    Node *temp = head;
    if (temp != NULL && temp->Next != head)
    {
        while (temp->Next->Next != head)
        {
            temp = temp->Next;
        }
        Node *delNode = temp->Next;
        temp->Next = delNode->Next;
        delete delNode;
    }
    else
    {
        if (temp == NULL)
        {
            cout << "There is no value in the Linked list" << endl;
        }
        else
            deletionAtHead(head);
    }
}
void deletionAtSpecificPosition(Node *&head, int position)
{
    Node *temp = head;
    if (temp != NULL && position <= countLength(head))
    {
        if (position == 1)
        {
            deletionAtHead(head);
        }
        else if (position == countLength(head))
        {
            deletionAtTail(head);
        }
        else
        {
            int i = 1;
            while (i < position - 1)
            {
                temp = temp->Next;
                i++;
            }
            Node *delNode = temp->Next;
            temp->Next = delNode->Next;
            delete delNode;
        }
    }
    else
    {
        if (position > countLength(head))
        {
            cout << "Position Out of Bound";
        }
        else
            cout << "There is no value in the Linked list" << endl;
    }
}
void deletionByValueUnique(Node *&head, int val)
{
    // Find the position of the value
    int position;
    // position = searchByValueUnique(head, val);
    //  Delete the Node at the position
    if (position == -1)
    {
        cout << "Value not Found in the Linked List" << endl;
    }
    else
    {
        deletionAtSpecificPosition(head, position);
    }
}

int main()
{

    Node *head = NULL; // Create a Node type object follow the class rule.

    int n, position;

    cout << "Choice 1: Insertion of Head: " << endl
         << "Choice 2: Insertion of Tail: " << endl
         << "Choice 3: Insertion of specific Position: " << endl
         << "Choice 4: Deletion At Head: " << endl
         << "Choice 5: Deletion At Tail: " << endl
         << "Choice 6: Deletion At Specific Position: " << endl
         << "Choice 0: Exit" << endl
         << endl;
    cout << "Next Choice: ";
    int choice;
    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> n;
            InsertAtHead(head, n);
            break;
        case 2:
            cout << "Enter the value: ";
            cin >> n;
            InsertAtTail(head, n);
            break;
        case 3:
            cout << "Enter the Desired Position: ";
            cin >> position;
            cout << "Enter the value: ";
            cin >> n;
            insertionAtSpecificPosition(head, position, n);
            break;

        case 4:
            deletionAtHead(head);
            break;
        case 5:
            deletionAtTail(head);
            break;
        case 6:
            if (head == NULL)
            {
                cout << "There is No Value in the Linked List" << endl;
                break;
            }
            cout << "Enter the Desired Position: ";
            cin >> position;
            deletionAtSpecificPosition(head, position);
            // display(head);
            break;
        default:
            break;
        }

        cout << "Next choice:";
        cin >> choice;
    }
    cout << "Linked List: ";
    display(head);
    cout << "Length of linked list: " << countLength(head) << endl;
    return 0;
}