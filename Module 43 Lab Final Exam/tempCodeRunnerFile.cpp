#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};
void insert(TreeNode **root, int val)
{
    queue<TreeNode *> q;
    q.push(*root);
    while (q.size())
    {
        TreeNode *temp = q.front();
        q.pop();
        if (!temp->left)
        {
            if (val != NULL)
                temp->left = new TreeNode(val);
            else
                temp->left = new TreeNode(0);
            return;
        }
        else
        {
            q.push(temp->left);
        }
        if (!temp->right)
        {
            if (val != NULL)
                temp->right = new TreeNode(val);
            else
                temp->right = new TreeNode(0);
            return;
        }
        else
        {
            q.push(temp->right);
        }
    }
}
TreeNode *make_tree(vector<int> v)
{
    TreeNode *root = new TreeNode(v[0]);
    for (int i = 1; i < v.size(); i++)
    {
        insert(&root, v[i]);
    }
    return root;
}
class Solution
{
public:
    int ret;
    bool ok(vector<int> &v)
    {
        int odd = 0;
        for (auto &it : v)
        {
            odd += it & 1;
        }
        return odd == 0 || odd == 1;
    }
    void dfs(TreeNode *node, vector<int> &v)
    {
        if (!node)
            return;
        v[node->val]++;
        if (!node->left && !node->right)
        {
            if (ok(v))
                ret++;
            v[node->val]--;
            return;
        }
        dfs(node->left, v);
        dfs(node->right, v);
        v[node->val]--;
    }
    int pseudoPalindromicPaths(TreeNode *root)
    {
        ret = 0;
        vector<int> cnt(10);
        dfs(root, cnt);
        return ret;
    }
};
main()
{
    Solution ob;
    vector<int> v = {2, 3, 1, 3, 1, NULL, 1};
    TreeNode *root = make_tree(v);
    cout << (ob.pseudoPalindromicPaths(root));
}