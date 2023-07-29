#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/

int findCeil(BinaryTreeNode<int> *root, int x)
{
    BinaryTreeNode<int>*cur = root;
    int ceil = -1;
    while(cur)
    {
        if(cur->data==x)
        {
            return x;
        }
        else if(cur->data>x)
        {
            ceil = cur->data;
            cur = cur->left;
        }
        else
        {
            cur = cur->right;
        }
    }
    return ceil;
}
