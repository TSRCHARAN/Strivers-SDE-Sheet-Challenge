#include <bits/stdc++.h>
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int> getPostOrderTraversal(TreeNode *root)
{
    vector<int>postOrder;
    if (root == NULL) return postOrder;

    stack<TreeNode*>s1;
    stack<TreeNode*>s2;
    TreeNode *node = root;
    s1.push(node);
    while (!s1.empty())
    {
        node = s1.top();
        s1.pop();
        s2.push(node);
        if (node -> left != NULL)
            s1.push(node -> left);
        if (node -> right != NULL)
            s1.push(node -> right);
    }
    while(!s2.empty())
    {
        postOrder.push_back(s2.top() -> data);
        s2.pop();
    }
    return postOrder;

}
