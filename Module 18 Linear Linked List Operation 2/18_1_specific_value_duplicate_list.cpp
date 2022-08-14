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
void insertionAtspecificPosition(Node *&head, int pos, int val);
int searchByValueUnique(Node *&head, int key);
void searchByValueUnique(Node *&head, int searchValue, int value);
void SearchByValueDuplicate(Node *&head, int key);
void deletionAtHead(Node *&head);
void deletionAtHead(Node *&head);

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

void insertionAtspecificPosition(Node *&head, int pos, int val)
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

int SearchByValueUnique(Node *&head, int key)
{
    Node *temp = head; // 1 2 3 4 5 6       9 Case 1 | ---- 9 Case 2
    int count = 1;
    // Temp check for Case 2 before enter the while loop. Otherwise, we will get segmentation erro.
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
        temp = temp->Next; // 2 3 4 NULL
        count++;           // 2 3 4
    }
    return count;
}

void SearchByValueDuplicate(Node *&head, int key)
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
            // cout << count << " ";
            position[k] = count;
            k++;
            flag = 1;
        }
        temp = temp->Next;
        count++;
    }
    if (flag == 0)
        cout << "The search value is not yet in the List" << endl;
    else
    {
        position[0] = k;
        cout << "The value is found at position: ";
        for (int i = 1; i < position[0]; i++)
        {
            cout << position[i];
            if (i < position[0] - 1)
                cout << ",";
        }
        cout << endl;
    }
}

Test SearchByValueDuplicateReturn(Node *&head, int key)
{
    Node *temp = head;
    Test T;
    int k = 1;
    int count = 1;

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

void searchByValueUnique(Node *&head, int searchValue, int value)
{
    // Step 1: Search the Position of the searchValue
    int position;
    position = SearchByValueUnique(head, searchValue);
    // step 2: Insert the value at the Position+1
    insertionAtspecificPosition(head, position + 1, value);
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
        cout << "There is No Value in the Linked List" << endl;
    }
}

void deletionAtTail(Node *&head)
{
    Node *temp = head;
    if (temp != NULL && temp->Next!=NULL)
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
        //Head is Null
       if(temp==NULL)
            cout<<"There is No Value in the Linked List"<< endl;
       //Head is Tail
       else
            deletionAtHead(head);
    }
}

int main()
{

    Node *head = NULL; // Create a Node type object follow the class rule.

    int n, position;

    cout << "Choice 1: Insertion of Head: " << endl
         << "Choice 2: Insertion of Tail: " << endl
         << "Choice 3: Insert at specific position: " << endl
         << "Choice 4: Search a value(Unique List): " << endl
         << "Choice 5: Search a value(Duplication enable List): " << endl
         << "Choice 6: Insertion after a specific value (Unique List)" << endl
         << "Choice 7: Deletion at Head: " << endl
         << "Choice 8: Deletion at Tail: " << endl
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
            cout << "Enter the position: ";
            cin >> position;
            cout << "Enter the value: ";
            cin >> n;
            insertionAtspecificPosition(head, position, n);
            break;
        case 4:
            cout << "Enter the value to search: ";
            cin >> n;
            position = SearchByValueUnique(head, n);
            if (position != -1)
            {
                cout << "The number is at position " << position << endl;
            }
            else
            {
                cout << "The number is not yet in the position. " << endl;
            }
            break;
        case 5:
            cout << "Enter the value to search: ";
            cin >> n;
            Test T;
            T = SearchByValueDuplicateReturn(head, n);
            if (T.position[0] == 1)
            {
                cout << "The search value is not yet in the List" << endl;
            }
            else
            {
                int size = T.position[0];
                cout << "The value is found at Position: ";
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