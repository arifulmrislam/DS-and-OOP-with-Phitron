#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int val)
    {
        value = val;
        left = NULL;
        right = NULL;
    }
};
void Nthorder(Node *node, int n)
{
    static int count = 0;
    if (node == NULL)
        return;

    if (count <= n)
    {
        Nthorder(node->left, n);
        count++;
        if (count == n)
            cout << node->value << endl;

        Nthorder(node->right, n);
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    int n = 4;

    Nthorder(root, n);
    return 0;
}
