#include <bits/stdc++.h>
/************************************************************

    Following is the Tree node structure

	template <typename T>
    class TreeNode
    {
        public :
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

long long int fun(TreeNode<int>*root, long long int &maxi)
{
    if(root==NULL)
    {
        return 0;
    }
    long long int lh = fun(root->left, maxi);
    long long int rh = fun(root->right, maxi);

    maxi = max(maxi,lh+rh+root->val);

    return root->val+max(lh,rh);
}

long long int findMaxSumPath(TreeNode<int> *root)
{
    if(root==NULL)
    {
        return -1;
    }
    if(root->left==NULL || root->right==NULL)
    {
        return -1;
    }
    long long int maxi = 0;
    fun(root,maxi);
    return maxi;
}
