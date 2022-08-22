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

void deleteAlt(Node *head,
               int M, int N)
{
    Node *curr = head, *t;
    int count;

    while (curr)
    {
        for (count = 1; count < M &&
                        curr != NULL;
             count++)
            curr = curr->next;

        if (curr == NULL)
            return;

        t = curr->next;
        for (count = 1; count <= N &&
                        t != NULL;
             count++)
        {
            Node *temp = t;
            t = t->next;
            free(temp);
        }

        curr->next = t;
        curr = t;
    }
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
    int n, M, N;
    cin >> n >> M >> N;
    for (int i = 0; i < n; i++)
    {
        int arr;
        cin >> arr;
        insertAtHead(root, arr);
    }
    deleteAlt(root, M, N);
    Display(root);
    return 0;
}


