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

void preOrderFun(TreeNode* node, vector<int>&preOrder)
{
    if(node==NULL)
    {
        return;
    }

    preOrder.push_back(node->data);
    preOrderFun(node->left,preOrder);
    preOrderFun(node->right,preOrder);
}

vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int>preOrder;
    preOrderFun(root,preOrder);
    return preOrder;
}
