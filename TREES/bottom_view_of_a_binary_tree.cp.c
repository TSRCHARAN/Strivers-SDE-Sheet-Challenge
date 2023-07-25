#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure.

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> * root)
{
    vector<int>bottom;
    if(root==NULL)
    {
        return bottom;
    }

    queue<pair<BinaryTreeNode<int>*,int>>q;
    q.push({root,0});

    map<int,int>mpp;

    while(!q.empty())
    {
        int n = q.size();
        auto it = q.front().first;
        int ind = q.front().second;
        q.pop();
        mpp[ind] = it->data;
        if(it->left!=NULL) q.push({it->left,ind-1});
        if(it->right!=NULL) q.push({it->right,ind+1});
    }

    for(auto it : mpp)
    {
        bottom.push_back(it.second);
    }
    return bottom;
}
