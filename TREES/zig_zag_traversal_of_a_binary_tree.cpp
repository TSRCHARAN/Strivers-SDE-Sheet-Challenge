#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

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

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    vector<int>ans;
    if(root==NULL) return ans;

    queue<BinaryTreeNode<int>*>q;
    q.push(root);

    bool leftToRight = true;

    while(!q.empty())
    {
        int size = q.size();
        vector<int>temp(size);
        for(int i=0; i<size; i++)
        {
            auto it = q.front();
            q.pop();
            int ind = leftToRight ? i : size-i-1;
            temp[ind] = it->data;
            if(it->left) q.push(it->left);
            if(it->right) q.push(it->right);
        }
        leftToRight = !leftToRight;
        ans.insert(ans.end(),temp.begin(),temp.end());
    }
    return ans;
}
