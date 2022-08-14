#include <bits/stdc++.h>
using namespace std;

class doublyNode
{
public:
    int val;
    doublyNode *prev;
    doublyNode *next;

    doublyNode(int val)
    {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};
void InsertAtTail(doublyNode *&head, int val);
void InsertAtHead(doublyNode *&head, int val);

void InsertAtTail(doublyNode *&head, int val)
{
    doublyNode *newNode = new doublyNode(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    doublyNode *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void InsertAtHead(doublyNode *&head, int val)
{
    // s1: newNode creation
    doublyNode *newNode = new doublyNode(val);
    // s2: Update of head->prev
    head->prev = newNode;
    // s3: update of newNode->Next
    newNode->next = head;
    // s4: Update of head
    head = newNode;
}
void display(doublyNode *head)
{
    while (head != NULL)
    {
        cout << head->val;
        if (head->next != NULL)
            cout << "-->";
        head = head->next;
    }
    cout << endl
         << endl;
}

int countLength(doublyNode *&head)
{
    int count = 0;
    doublyNode *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    doublyNode *head = NULL;

    int value, position;

    cout << "Choice 1: Insertion at Head" << endl
         << "Choice 2: Insertion at Tail" << endl
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
            cin >> value;
            InsertAtHead(head, value);
            break;
        case 2:
            cout << "Enter the  value: ";
            cin >> value;
            InsertAtTail(head, value);
            break;
        default:
            break;
        }
        cout << "Next Choice: ";
        cin >> choice;
    }
    cout << endl
         << "Double Linked List: ";
    display(head);
    cout << "Length of the Double Linked List: " << countLength(head) << endl;

    return 0;
}