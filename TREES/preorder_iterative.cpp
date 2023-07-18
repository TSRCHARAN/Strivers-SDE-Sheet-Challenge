#include <bits/stdc++.h>
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int>preOrder;
    if(root==NULL)
    {
        return preOrder;
    }
    stack<TreeNode*>st;
    st.push(root);

    while(!st.empty())
    {
        TreeNode* node = st.top();
        st.pop();
        preOrder.push_back(node->data);

        if(node->right!=NULL)
            st.push(node->right);
        if(node->left!=NULL)
            st.push(node->left);
    }

    return preOrder;
}
