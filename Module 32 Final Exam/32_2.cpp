void level_order(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    int level = 0;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        treeNode* chkNode = q.front();
        q.pop();
        if(chkNode!=NULL){
            cout<<chkNode->data<<" ";
            //chk+= to_string(chkNode->data);
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
                level ++;
            }
        }
    }
}