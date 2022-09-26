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
void preOrderTraversal(treeNode *root, string &chk);
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

void preOrderTraversal(treeNode *root, string &chk) // Root Left Right
{
    if (root == NULL)
        return;

    chk += to_string(root->data);
    preOrderTraversal(root->leftChild, chk);
    preOrderTraversal(root->rightChild, chk);
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
        //cout << root->data << endl;
        return;
    }
    else // CASE 2
    {
        //cout << endl;
        spacePrint(level);
        //cout << "Root: " << root->data << endl;
    }

    if (root->leftChild != NULL)
    {
        spacePrint(level);
        //cout << "Left: ";
        printTree(root->leftChild, level + 1);
    }
    if (root->rightChild != NULL)
    {
        spacePrint(level);
        //cout << "Right: ";
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

int searchInorder(int preOrder[], int current, int start, int end){
    for(int i=start; i<=end;i++){
        if(inOrder[i]==current){
            return i;
        }
    }
    return -1;
}

treeNode* buildTreePreIn(int preOrder[], int inOrder[], int start, int end){
    static int id = 0;

    int current = preOrder[id];
    id++;
    treeNode* newNode = new treeNode(current);
    if(start == end){
        return newNode;
    }
    int pos = searchInorder(inOrder, current, start, end);
    newNode->leftChild = buildTreePreIn(preOrder,inOrder,start,pos-1);
    newNode->rightChild = buildTreePreIn(preOrder,inOrder,pos+1,end);

    return newNode;
}

void printLeaves(treeNode *root){
    if(root == NULL)    return;

    if(root->leftChild == NULL && root->rightChild == NULL){
        cout<<root->data<<" ";
        return;
    }
    printLeaves(root->leftChild);
    printLeaves(root->rightChild);
}

void printNonLeavesLeft(treeNode *root){
    if(root == NULL)    return;

    if(root->leftChild!=NULL){
        cout<<root->data<< " ";
        printNonLeavesLeft(root->leftChild);
    }
    else if(root->rightChild!=NULL){
        cout<<root->data<<" ";
        printNonLeavesLeft(root->rightChild);
    }
}
void printNonLeavesRight(treeNode *root){
    if(root == NULL)    return;
    if(root->rightChild!=NULL){
        cout<<root->data<<" ";
    }
    else if(root->leftChild!=NULL){
        cout<<root->data<<" ";
    }
}
void boundaryTraversal(treeNode *root){
    if(root == NULL)    return;

    cout<<root->data<<" ";

    //LB Non-Leaves
    printNonLeavesLeft(root->leftChild);
    //LB leaves
    printLeaves(root->leftChild);
    //RB Leaves
    printLeaves(root->rightChild);
    //RB Non-Leaves
    printNonLeavesRight(root->rightChild);
}

treeNode* insertionBST(treeNode* root, int value){
    treeNode* newNode = new treeNode(value);

    if(root==NULL){
        root = newNode;
        return root;
    }
    //value < root -> data
    if(value < root->data){
        root->leftChild = insertionBST(root->leftChild,value);
    }
    //value > root->data
    else if(value>root->data){
        root->rightChild = insertionBST(root->rightChild,value);
    }

    return root;
}

treeNode* deletionBST(treeNode* root, int value){
    if(value< root->data){
        root->leftChild = deletionBST(root->leftChild,value);
    }
    else if(value> root->data){
        root->rightChild = deletionBST(root->leftChild,value);
    }
    else{
        //Implement of three case
        if(root->leftChild==NULL){
            treeNode* temp=root->rightChild;
            free(root);
            return temp; 
        }

        else if(root->rightChild == NULL){
            treeNode* temp= root->leftChild;
            free(root);
            return temp;
        }
        else{ //inorder successer always will be in right side.
            
        }
    }
}
int main(){
    int n;
    cin>>n;
    treeNode *root = NULL;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        root = insertionBST(root, value);
    }
    string traversal="";
    traversal = inOrder(root);
    cout<<traversal;

    int key;
    cin>>key;
    if(searchBST(root,key)==NULL){
        cout<<endl<<"value does not exit in the BST";
    }
    else{
        cout<<endl<<"value exit in the BST";
    }
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