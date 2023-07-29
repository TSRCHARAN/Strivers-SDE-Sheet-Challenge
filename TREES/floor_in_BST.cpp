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

int floorInBST(TreeNode<int> * root, int x)
{
    TreeNode<int>*cur = root;
    int floor = -1;
    while(cur)
    {
        if(cur->val==x)
        {
            return x;
        }
        else if(cur->val>x)
        {
            cur = cur->left;
        }
        else
        {
            floor = cur->val;
            cur = cur->right;
        }
    }
    return floor;
}
