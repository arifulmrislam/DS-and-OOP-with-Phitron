void invert_tree(Node * root){
    if(root == NULL)    return -1;

    else{
        struct Node *temp;
        invert_tree(root->leftChild);
        invert_tree(root->rightChild);

        temp = root->leftChild;
        root->leftChild = root->rightChild;
        root->rightChild = temp;
    }
}