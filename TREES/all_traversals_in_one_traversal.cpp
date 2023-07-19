#include <bits/stdc++.h>
/************************************************************

    Following is the Binary Tree node structure:

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


************************************************************/

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root)
{
    vector<vector<int>>ans;

    if(root==NULL)
    {
        return ans;
    }

    vector<int>in;
    vector<int>pre;
    vector<int>post;

    stack<pair<BinaryTreeNode<int>*,int>>st;
    st.push({root,1});

    while (!st.empty())
    {
        auto it = st.top();
        st.pop();

        // this is part of pre
        // increment 1 to 2
        // push the left side of the tree
        if (it.second == 1)
        {
            pre.push_back(it.first -> data);
            it.second++;
            st.push(it);

            if (it.first -> left != NULL)
            {
                st.push({it.first -> left,1});
            }
        }

        // this is a part of in
        // increment 2 to 3
        // push right
        else if (it.second == 2)
        {
            in.push_back(it.first -> data);
            it.second++;
            st.push(it);

            if (it.first -> right != NULL)
            {
                st.push({it.first -> right,1});
            }
        }
        // don't push it back again
        else
        {
            post.push_back(it.first -> data);
        }
    }

    ans.push_back(in);
    ans.push_back(pre);
    ans.push_back(post);

    return ans;
}
