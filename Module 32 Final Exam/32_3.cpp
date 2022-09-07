void level_order_reverse(Node* root){
    stack<Node*> s;
    queue<Node*> q;

    q.push(root);

    while(!q.empty()){
        root = q.front();
        q.pop();
        s.push(root);

        if(root->rightChild){
            q.push(root->rightChild);
        }

        if(root->leftChild){
            q.push(root->leftChild);
        }

        while(!s.empty()){
            root = s.top();
            cout<<root->data<<" ";
            s.pop();
        }
    }
}