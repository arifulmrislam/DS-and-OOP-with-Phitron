         bool sol(TreeNode* root,int c){
        
        if(root==NULL)
            
            return true;
        
        if(root->val!=c)
            
            return false;
        
         return sol(root->left,root->val)&&sol(root->right,root->val);
    }
    bool isUnivalTree(TreeNode* root) {
       
        return sol(root,root->val);
        
    }