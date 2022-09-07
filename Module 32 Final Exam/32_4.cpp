bool isSymmetric(Node* root1,Node* root2){
    if(root1 == NULL && root2 == NULL)    return 1;

    if(root1 && root2 && root1->data == root2->data)
        return isSymmetric(root1->left, root2->right) &&
        isSymmetric(root1->right, root2->left);

}

bool isSymmetric(Node* root){
    if(root == NULL)    return 1;
    return isSymmetric(root->left, root->right);
}


 bool solve(TreeNode* a,TreeNode* b)

 {

     if(a==NULL||b==NULL) return (a==b);

     if(a->val!=b->val) return false;

     return solve(a->left,b->right)&&solve(a->right,b->left);

 }


bool isSymmetric(TreeNode* A) {

    return solve(A->left,A->right);

}