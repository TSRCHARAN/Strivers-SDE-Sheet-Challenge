#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root)
{
    vector<int>top;
    if(root==NULL)
    {
        return top;
    }

    queue<pair<TreeNode<int>*,int>>q;
    q.push({root,0});

    map<int,int>mpp;

    while(!q.empty())
    {
        int n = q.size();
        auto it = q.front().first;
        int ind = q.front().second;
        q.pop();
        if(mpp.find(ind)==mpp.end())
        {
            mpp[ind] = it->val;
        }
        if(it->left!=NULL) q.push({it->left,ind-1});
        if(it->right!=NULL) q.push({it->right,ind+1});
    }

    for(auto it : mpp)
    {
        top.push_back(it.second);
    }
    return top;
}
