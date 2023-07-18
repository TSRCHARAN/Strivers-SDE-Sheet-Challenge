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

void postOrderFun(TreeNode* node, vector<int>&postOrder)
{
    if(node==NULL)
    {
        return;
    }

    postOrderFun(node->left,postOrder);
    postOrderFun(node->right,postOrder);
    postOrder.push_back(node->data);
}

vector<int> getPostOrderTraversal(TreeNode *root)
{
    vector<int>postOrder;
    postOrderFun(root,postOrder);
    return postOrder;
}
