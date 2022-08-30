#include <bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode *leftChild;
    treeNode *rightChild;

    // create constructor
    treeNode(int value)
    {
        data = value;
        leftChild = NULL;
        rightChild = NULL;
    }
};
void printTree(treeNode *root, int level);
void spacePrint(int level);
void printTree(treeNode *left, int level)
{
    if (left == NULL) // WHEN the tree is empty
    {
        return;
    }

    if (left->leftChild == NULL && left->rightChild == NULL) // CASE 1
    {
        cout << left->data << endl;
        return;
    }
    else // CASE 2
    {
        cout << endl;
        spacePrint(level);
        cout << "Left: " << left->data << endl;
    }

    if (left->leftChild != NULL)
    {
        spacePrint(level);
        cout << "Root: ";
        printTree(left->leftChild, level + 1);
    }
    if (left->rightChild != NULL)
    {
        spacePrint(level);
        cout << "Right: ";
        printTree(left->rightChild, level + 1);
    }
}

void spacePrint(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "   ";
    }
}

int main()
{
    int n;
    cin >> n;

    treeNode *allNodes[n];

    // initially decl all node is -1
    for (int i = 0; i < n; i++)
    {
        allNodes[i] = new treeNode(-1);
    }
    // we need to provide real value;
    for (int i = 0; i < n; i++)
    {
        int value, left, right;
        cin >> value >> left >> right;
        allNodes[i]->data = value;
        if(left>n-1 || right>n-1){
            cout<<"Invalid index";
            break;
        }

        if (left != -1)
        {
            allNodes[i]->leftChild = allNodes[left];
        }

        if (right != -1)
        {
            allNodes[i]->rightChild = allNodes[right];
        }
    }
    // allNodes er root and root er level;
    printTree(allNodes[0], 0);
    return 0;
}

/*
9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1
*/

/*
9
0 -1 -1
1 -1 -1
2 -1 -1
3 1 4
4 -1 -1
5 -1 -1
6 -1 -1
7 5 8
8 -1 -1
*/
/*
9
0 -1 -1
1 0 -1
2 -1 -1
3 1 4
4 -1 -1
6 -1 -1
7 5 8
5 2 6
8 -1 -1
*/
