#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
struct Node *newNode(int data)
{
    Node *node = new Node;
    node->data = data;
    node->next = NULL;
    return node;
}
void insertAtHead(Node *&root, int data)
{
    Node *node = newNode(data);
    Node *ptr;
    if (root == NULL)
    {
        root = node;
    }
    else
    {
        ptr = root;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = node;
    }
}
int lengthOfLinkedList(Node *root)
{
    int length = 0;
    while (root != NULL)
    {
        ++length;
        root = root->next;
    }
    return length;
}

Node* reverseKNodes(Node* root, int k)
{
    // base case
    if (!root)
        return NULL;
    Node* current = root;
    Node* next = NULL;
    Node* prev = NULL;
    int count = 0;
  
    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
  
    if (next != NULL)
        root->next = reverseKNodes(next, k);
  
    /* prev is new head of the input list */
    return prev;
}
void Display(Node *root)
{

    while (root->next != NULL)
    {
        cout << root->data << "->";
        root = root->next;
    }
    cout << root->data << "\n";

    cout << endl
         << endl;
}

int main()
{
    Node *root = NULL;
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int arr;
        cin >> arr;
        insertAtHead(root, arr);
    }
    cin >> k;
    root = reverseKNodes(root, k);
    Display(root);
    return 0;
}





