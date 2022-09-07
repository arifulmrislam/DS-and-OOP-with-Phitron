vector<vector<int>> zigzag_order(Node *root)
{
    vector<vector<int>> ans;
    if (!root)
        return ans;
    queue<Node *> q;
    q.push(root);
    int c = 0;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> temp;
        for (int i = 0; i < size; i++)
        {
            q.pop();
            temp.ppush_back(node->data);
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        if (c == 1)
            reverse(temp.begin(), temp.end());
        c = 1 - c;
        ans.push_back(temp);
    }
    return ans;
}