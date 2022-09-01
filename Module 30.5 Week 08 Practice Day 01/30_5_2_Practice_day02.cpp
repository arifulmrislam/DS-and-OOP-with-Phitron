#include <bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int value;
    treeNode *rightChild;
    treeNode *leftChild;

    treeNode(int value)
    {
        this->value = value;
        rightChild = NULL;
        leftChild = NULL;
    }
};

void Nthorder(treeNode *allNode, int n)
{
    static int count = 0;
    if (allNode == NULL)
        return;
    Nthorder(allNode->leftChild, n);
    count++;
    if (count == n)
        cout << allNode->value << endl;
    Nthorder(allNode->rightChild, n);
}

int main()
{
    int n, k, value, left, right;
    cin >> n;

    treeNode *allNode[n];

    for (int i = 0; i < n; i++)
    {
        allNode[i] = new treeNode(-1);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> value >> left >> right;
        allNode[i]->value = value;

        if (left != -1)
        {
            allNode[i]->leftChild = allNode[left];
        }
        if (right != -1)
        {
            allNode[i]->rightChild = allNode[right];
        }
    }

    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> k; // this is the kth order
        Nthorder(allNode[0], k);
    }

}
