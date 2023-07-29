#include <bits/stdc++.h>
/************************************************************
    Following is the Binary Search Tree node structure

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

TreeNode<int>* lca(TreeNode<int>* root, TreeNode<int>* p, TreeNode<int>* q)
{
    if(!root)
        return NULL;

    int curr = root->data;

    if(curr < p->data && curr < q->data)
    {
        return lca(root->right, p, q);
    }
    if(curr > p->data && curr > q->data)
    {
        return lca(root->left, p, q);
    }
    return root;
}
TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* p, TreeNode<int>* q)
{
    return lca(root,p,q);
}
