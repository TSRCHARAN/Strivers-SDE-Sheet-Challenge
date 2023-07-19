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
vector<int> getPostOrderTraversal(TreeNode *root)
{
    vector < int > postOrder;
    if (root == NULL) return postOrder;
    TreeNode* cur = root;
    stack < TreeNode * > st;
    while (cur != NULL || !st.empty())
    {
        if (cur != NULL)
        {
            st.push(cur);
            cur = cur -> left;
        }
        else
        {
            TreeNode * temp = st.top() -> right;
            if (temp == NULL)
            {
                temp = st.top();
                st.pop();
                postOrder.push_back(temp -> data);
                while (!st.empty() && temp == st.top() -> right)
                {
                    temp = st.top();
                    st.pop();
                    postOrder.push_back(temp -> data);
                }
            }
            else
                cur = temp;
        }
    }
    return postOrder;
}
