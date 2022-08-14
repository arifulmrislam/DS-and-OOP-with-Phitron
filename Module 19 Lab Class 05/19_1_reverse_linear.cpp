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
void insertionAtSpecificPosition(Node *&head, int pos, int val);
int searchByValueUnique(Node *&head, int key);
void searchByValueDuplication(Node *&head, int key);
Test searchByValueDuplicateReturn(Node *&head, int key);
void searchByValueUnique(Node *&head, int searchValue, int n);
void deletionAtHead(Node *&head, int n);
void deletionAtTail(Node *&head);
void deletionAtSpecificPosition(Node *&head, int position);
void deletionByValueUnique(Node *&head, int val);
Node *reverseNonRecursive(Node *&head);
Node *reverseRecursive(Node *&head);

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

int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->Next;
    }
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
int searchByValueUnique(Node *&head, int key)
{
    Node *temp = head;
    int count = 1;
    if (temp == NULL)
    {
        return -1;
    }

    while (temp->value != key)
    {
        if (temp->Next == NULL)
        {
            return -1;
        }
        temp = temp->Next;
        count++;
    }
    return count;
}
void searchByValueDuplication(Node *&head, int key)
{
    Node *temp = head;
    int size;
    size = countLength(head);
    int position[size + 1], k = 1;
    int count = 1;
    int flag = 0;
    while (temp != NULL)
    {
        if (temp->value == key)
        {
            cout << count << " ";
            flag = 1;
        }
        temp = temp->Next;
        count++;
    }
    if (flag == 0)
        cout << "The search value is not yet in the list." << endl;
    else
    {
        position[0] = k;
        cout << "The value is found at position: ";
        for (int i = 1; i < position[0]; i++)
        {
            cout << position[i];
            if (i < position[0] - 1)
                cout << ", ";
        }
        cout << endl;
    }
}
Test searchByValueDuplicateReturn(Node *&head, int key)
{
    Node *temp = head;
    Test T;
    int k = 1;
    int count = 1;
    int flag = 0;
    while (temp != NULL)
    {
        if (temp->value == key)
        {
            // cout << count << " ";
            T.position[k] = count;
            k++;
        }
        temp = temp->Next;
        count++;
    }
    T.position[0] = k;
    return T;
}
void searchByValueUnique(Node *&head, int searchValue, int n)
{
    int position;
    position = searchByValueUnique(head, searchValue);
    insertionAtSpecificPosition(head, position + 1, n);
}
void deletionAtHead(Node *&head)
{
    Node *temp = head;
    if (temp != NULL)
    {
        head = temp->Next;
        delete temp;
    }
    else
    {
        cout << "There is no value in the Linked list" << endl;
    }
}
void deletionAtTail(Node *&head)
{
    Node *temp = head;
    if (temp != NULL && temp->Next != NULL)
    {
        while (temp->Next->Next != NULL)
        {
            temp = temp->Next;
        }
        Node *delNode = temp->Next;
        temp->Next = NULL;
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
    position = searchByValueUnique(head, val);
    // Delete the Node at the position
    if (position == -1)
    {
        cout << "Value not Found in the Linked List" << endl;
    }
    else
    {
        deletionAtSpecificPosition(head, position);
    }
}
Node *reverseNonRecursive(Node *&head)
{
    Node *prev = NULL;
    Node *current = head;
    if (head == NULL)
    {
        cout<<"The linked list is empty "<<endl;
        return head;
    }
    Node *next = head->Next;

    while (true) // NULL | Next = NULL
    {
        current->Next = prev;
        prev = current;
        current = next;
        if (current == NULL)
            break;
        next = next->Next;
    }

    return prev;
}
Node *reverseRecursive(Node *&head){
    //Base call
    if(head==NULL || head->Next == NULL){
        if(head==NULL) cout<<"The Linked List is empty"<<endl;
        return head;
    }
    //Recursive call
    Node* newHead = reverseRecursive(head->Next);
    head->Next->Next = head;
    head->Next = NULL;

    return newHead;
}
int main()
{

    Node *head = NULL; // Create a Node type object follow the class rule.

    int n, position;

    cout << "Choice 1: Insertion of Head: " << endl
         << "Choice 2: Insertion of Tail: " << endl
         << "Choice 3: Insertion of specific Position: " << endl
         << "Choice 4: Search a Value(Unique List): " << endl
         << "Choice 5: Search a Value(Duplication enable List): " << endl
         << "Choice 6: Insertion after a specific value(Unique List): " << endl
         << "Choice 7: Deletion At Head: " << endl
         << "Choice 8: Deletion At Tail: " << endl
         << "Choice 9: Deletion At Specific Position: " << endl
         << "Choice 10: Deletion By Value(Unique List): " << endl
         << "Choice 11: Reversal of List Non-Recursive: " << endl
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
            cout << "Enter the value to search: ";
            cin >> n;
            position = searchByValueUnique(head, n);
            if (position != -1)
            {
                cout << "The number is at position " << position << endl;
            }
            else
            {
                cout << "The number is not at List." << endl;
            }
            break;
        case 5:
            cout << "Enter the value to search: ";
            cin >> n;
            // searchByValueDuplication(head, n);
            Test T;
            T = searchByValueDuplicateReturn(head, n);
            if (T.position[0] == 1)
            {
                cout << "The Search Value is not yet in the List" << endl;
            }
            else
            {
                int size = T.position[0];
                cout << "The value is found at position: ";
                for (int i = 1; i < size; i++)
                {
                    cout << T.position[i];
                    if (i < size - 1)
                        cout << ", ";
                }
                cout << endl;
            }
            break;
        case 6:
            cout << "Enter the value to search: ";
            int searchValue;
            cin >> searchValue;
            cout << "Enter the value to insert: ";
            cin >> n;
            searchByValueUnique(head, searchValue, n);
            break;
        case 7:
            deletionAtHead(head);
            break;
        case 8:
            deletionAtTail(head);
            break;
        case 9:
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
        case 10:
            cout << "Enter the value to Delete: ";
            int delValue;
            cin >> delValue;
            deletionByValueUnique(head, delValue);
            // deletionAtSpecificPosition(head,delValue);
            break;
        case 11:
            //head = reverseNonRecursive(head);
            head = reverseRecursive(head);
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