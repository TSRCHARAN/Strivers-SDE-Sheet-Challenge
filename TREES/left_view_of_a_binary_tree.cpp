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

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int>leftView;
    if(root==NULL)
    {
        return leftView;
    }

    queue<TreeNode<int>*>q;
    q.push(root);

    while(!q.empty())
    {
        int n = q.size();

        for(int i=0; i<n; i++)
        {
            auto it = q.front();
            q.pop();
            if(i==0)
            {
                leftView.push_back(it->data);
            }
            if(it->left!=NULL) q.push(it->left);
            if(it->right!=NULL) q.push(it->right);
        }
    }
    return leftView;
}
