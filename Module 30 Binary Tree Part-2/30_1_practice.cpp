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
void inOrder(treeNode *root, string &chk);
void preOrder(treeNode *root, string &chk);
void postOrder(treeNode *root, string &chk);
void levelOrderTraversal(treeNode *root, string &chk);

void inOrder(treeNode *root, string &chk) //Left Root Right
{
    if (root == NULL)
        return;

    inOrder(root->leftChild, chk);
    chk += to_string(root->data);
    inOrder(root->rightChild, chk);
}

void preOrder(treeNode *root, string &chk) // Root Left Right
{
    if (root == NULL)
        return;

    chk += to_string(root->data);
    preOrder(root->leftChild, chk);
    preOrder(root->rightChild, chk);
}

void postOrder(treeNode *root, string &chk) //Left Right Root
{
    if (root == NULL)
        return;

    postOrder(root->leftChild, chk);
    postOrder(root->rightChild, chk);
    chk += to_string(root->data);
}

void printTree(treeNode *root, int level)
{
    if (root == NULL) // WHEN the tree is empty
    {
        return;
    }

    if (root->leftChild == NULL && root->rightChild == NULL) // CASE 1
    {
        cout << root->data << endl;
        return;
    }
    else // CASE 2
    {
        cout << endl;
        spacePrint(level);
        cout << "Root: " << root->data << endl;
    }

    if (root->leftChild != NULL)
    {
        spacePrint(level);
        cout << "Left: ";
        printTree(root->leftChild, level + 1);
    }
    if (root->rightChild != NULL)
    {
        spacePrint(level);
        cout << "Right: ";
        printTree(root->rightChild, level + 1);
    }
}

void spacePrint(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "   ";
    }
}

int levelOrderTraversal(treeNode *root, string &chk, int k){
    if(root == NULL){
        return -1;
    }
    int level = 0;
    queue<treeNode*>q;
    q.push(root);
    q.push(NULL);
    int max = -9999;

    while(!q.empty()){
        treeNode* chkNode = q.front();
        q.pop();
        if(chkNode !=NULL){
            if(level==k){
                if(max<chkNode->data){
                    max = chkNode->data;
                }
            }
            cout<<chkNode->data;
            chk+=to_string(chkNode->data);
            if(chkNode->leftChild!=NULL){
                q.push(chkNode->leftChild);
            }
            if(chkNode->rightChild!=NULL){
                q.push(chkNode->rightChild);
            }
        }
        else{
            if(!q.empty()){
                q.push(NULL);
                level++;
            }
        }
    }
    return max;
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
        if (left > n - 1 || right > n - 1)
        {
            cout << "Invalid index";
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
    // printTree(allNodes[0], 0);

    string inordertraversal = "";
    // inOrder(allNodes[0], inordertraversal);

    string preordertraversal = "";
    // preOrder(allNodes[0], preordertraversal);

    string postordertraversal = "";
    // postOrder(allNodes[0], postordertraversal);

    string levelorderTraversal = "";
    int maxValueAtK = levelOrderTraversal(allNodes[0],levelorderTraversal, 2);

    // cout << "Inorder Traversal : " << inordertraversal << endl;

    // cout << "Preorder Traversal : " << preordertraversal << endl;

    // cout << "Postorder Traversal : " << postordertraversal << endl;

    // cout<<"LevelOrder Travarsal : " << levelOrderTraversal << endl;

    cout <<endl << maxValueAtK << endl << endl;

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