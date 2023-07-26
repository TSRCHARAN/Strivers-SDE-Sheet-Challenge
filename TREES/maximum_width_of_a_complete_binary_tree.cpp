#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

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

int getMaxWidth(TreeNode<int> *root)
{
    if(root==NULL)
    {
        return 0;
    }

    int ans = 0;

    queue<pair<TreeNode<int>*,int>>q;
    q.push({root,0});

    while(!q.empty())
    {
        int size = q.size();
        int cur_min = q.front().second;
        int leftMostInd,rightMostInd;

        for(int i=0; i<size; i++)
        {
            int cur_ind = q.front().second - cur_min;

            TreeNode<int>* node = q.front().first;
            q.pop();

            if(i==0) leftMostInd = cur_ind;
            if(i==size-1) rightMostInd = cur_ind;

            if(node->left) q.push({node->left,2*cur_ind+1});
            if(node->right) q.push({node->right,2*cur_ind+2});
        }
        ans = max(ans, rightMostInd-leftMostInd+1);
    }
    return ans;
}
