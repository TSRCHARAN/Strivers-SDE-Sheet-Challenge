#include <bits/stdc++.h>
/************************************************************

Following is the Binary Tree node class

template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/

vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    map<int,map<int,vector<int>>>nodes;
    queue<pair<TreeNode<int>*,pair<int,int>>>q;
    vector<int>ans;
    if(root==NULL)
    {
        return ans;
    }

    q.push({root,{0,0}}); //initial vertical and level

    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        TreeNode<int> * temp = p.first;

        //x -> vertical , y->level
        int x = p.second.first, y = p.second.second;
        nodes[x][y].push_back(temp -> data); //inserting to multiset

        if(temp -> left)
        {
            q.push({temp -> left,{x - 1,y + 1}});
        }
        if(temp -> right)
        {
            q.push({temp -> right,{x + 1,y + 1}});
        }
    }
    for(auto p : nodes)
    {
        vector<int>col;
        for (auto q: p.second)
        {
            col.insert(col.end(), q.second.begin(), q.second.end());
        }
        ans.insert(ans.end(),col.begin(),col.end());
    }
    return ans;
}
