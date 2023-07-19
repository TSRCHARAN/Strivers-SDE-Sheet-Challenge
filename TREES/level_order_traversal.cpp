#include <bits/stdc++.h>
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int>levelOrder;
    if(root==NULL)
    {
        return levelOrder;
    }

    queue<BinaryTreeNode<int>*>q;
    q.push(root);

    while(!q.empty())
    {
        int n = q.size();

        for(int i=0; i<n; i++)
        {
            auto it = q.front();
            q.pop();
            levelOrder.push_back(it->val);
            if(it->left!=NULL) q.push(it->left);
            if(it->right!=NULL) q.push(it->right);
        }
    }
    return levelOrder;
}
