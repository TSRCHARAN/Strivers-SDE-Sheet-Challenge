#include <bits/stdc++.h>
/************************************************************

    Following is the Binary Tree node structure:

    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

bool isLeaf(TreeNode<int>*node)
{
    return !node->left && !node->right;
}

void addLeftBoundary(TreeNode<int>*root, vector<int>&ans)
{
    TreeNode<int>*node = root->left;
    while(node!=NULL)
    {
        if(!isLeaf(node)) ans.push_back(node->data);
        if(node->left) node = node->left;
        else node = node->right;
    }
}

void addLeafNode(TreeNode<int>*root, vector<int>&ans)
{
    if(root==NULL)
    {
        return;
    }
    if(isLeaf(root))
    {
        ans.push_back(root->data);
        return;
    }
    addLeafNode(root->left, ans);
    addLeafNode(root->right, ans);
}

void addRightBoundary(TreeNode<int>*root, vector<int>&ans)
{
    TreeNode<int>*node = root->right;
    vector<int>temp;
    while(node!=NULL)
    {
        if(!isLeaf(node)) temp.push_back(node->data);
        if(node->right) node = node->right;
        else node = node->left;
    }
    for(int i=temp.size()-1;i>=0;i--)
    {
        ans.push_back(temp[i]);
    }
}

vector<int> traverseBoundary(TreeNode<int>* root)
{
    vector<int>ans;
    if(root==NULL)
    {
        return ans;
    }
    if(!isLeaf(root)) ans.push_back(root->data);

    addLeftBoundary(root,ans);
    addLeafNode(root,ans);
    addRightBoundary(root,ans);

    return ans;
}
