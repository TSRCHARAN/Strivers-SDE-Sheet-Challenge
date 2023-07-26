#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

TreeNode<int>* constructTreePreIn(vector<int>&inorder, int inStart, int inEnd, vector<int>&preorder, int preStart, int preEnd, map<int,int>&inMap)
{
    if(inStart>inEnd || preStart>preEnd)
    {
        return NULL;
    }

    TreeNode<int>* root = new TreeNode<int>(preorder[preStart]);
    int inRoot = inMap[root->data];
    int numsLeft = inRoot-inStart;

    root->left = constructTreePreIn(inorder, inStart, inRoot-1, preorder, preStart+1, preStart+numsLeft, inMap);

    root->right = constructTreePreIn(inorder, inRoot+1, inEnd, preorder, preStart+numsLeft+1, preEnd, inMap);

    return root;
}

TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
    if(inorder.size()!=preorder.size())
    {
        return NULL;
    }
    map<int,int>inMap;

    for(int i=0; i<inorder.size(); i++)
    {
        inMap[inorder[i]] = i;
    }

    return constructTreePreIn(inorder,0,inorder.size()-1,  preorder, 0, preorder.size()-1, inMap);
}
