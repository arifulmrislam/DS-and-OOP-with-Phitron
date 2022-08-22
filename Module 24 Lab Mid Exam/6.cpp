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
void Display(Node *root)
{

    while (root != NULL)
    {

        if (root->data % 2 == 0)
        {
            cout << -1;
            cout << " -> ";
            root = root->next;
        }
        else
        {
            cout << root->data;
            if (root->next != NULL)
                cout << " -> ";
            root = root->next;
        }
    }
    cout << endl
         << endl;
}
int main()
{
    Node *root = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int arr;
        cin >> arr;
        insertAtHead(root, arr);
    }
    Display(root);
    return 0;
}
