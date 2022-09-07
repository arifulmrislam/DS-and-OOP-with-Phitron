int sum(TreeNode* root){
    if(root == NULL){
        return -1;
    }
    return root->data + sum(root->leftChild) + sum(root->rightChild);
}

int tiltSum(TreeNode *root, int& temp){
    if(root == NULL){
        return -1;
    }
    int l = sum(root->leftChild);
    int r = sum(root->rightChild);

    temp += abs(l-r);

    tiltSum(root->leftChild, temp);
    tiltSum(root->rightChild, temp);

    return temp; 
}

int findTilt(TreeNode *root){
    int temp = 0;
    tiltSum(root, temp);
    return sum;
}