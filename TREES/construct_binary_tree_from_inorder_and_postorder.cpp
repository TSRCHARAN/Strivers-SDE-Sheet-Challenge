#include<bits/stdc++.h>
/************************************************************

   Following is the TreeNode class structure

   class TreeNode<T>
   {
   public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
  		{
            this -> data = data;
            left = NULL;
            right = NULL;
        }
   };


 ************************************************************/

TreeNode<int>* constructTreePreIn(vector<int>&inorder, int inStart, int inEnd, vector<int>&postorder, int postStart, int postEnd, map<int,int>&inMap)
{
    if(inStart>inEnd || postStart>postEnd)
    {
        return NULL;
    }

    TreeNode<int>* root = new TreeNode<int>(postorder[postEnd]);
    int inRoot = inMap[root->data];
    int numsLeft = inRoot-inStart;

    root->left = constructTreePreIn(inorder, inStart, inRoot-1, postorder, postStart, postStart+numsLeft-1, inMap);

    root->right = constructTreePreIn(inorder, inRoot+1, inEnd, postorder, postStart+numsLeft, postEnd-1, inMap);

    return root;
}

TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder)
{
    if(inOrder.size()!=postOrder.size())
    {
        return NULL;
    }
    map<int,int>inMap;

    for(int i=0; i<inOrder.size(); i++)
    {
        inMap[inOrder[i]] = i;
    }

    return constructTreePreIn(inOrder,0,inOrder.size()-1,  postOrder, 0, postOrder.size()-1, inMap);
}
