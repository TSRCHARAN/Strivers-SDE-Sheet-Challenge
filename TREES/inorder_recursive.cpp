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

void inOrderFun(TreeNode* node, vector<int>&inOrder)
{
    if(node==NULL)
    {
        return;
    }

    inOrderFun(node->left,inOrder);
    inOrder.push_back(node->data);
    inOrderFun(node->right,inOrder);
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int>inOrder;
    inOrderFun(root,inOrder);
    return inOrder;
}
