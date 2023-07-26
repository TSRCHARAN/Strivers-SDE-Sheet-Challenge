/*****************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

******************************************************/

bool fun(BinaryTreeNode<int>*left, BinaryTreeNode<int>*right)
{
    if(left==NULL || right==NULL)
    {
        return left==right;
    }
    return left->data==right->data && fun(left->left, right->right) && fun(left->right,right->left);
}

bool isSymmetric(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        return true;
    }
    return fun(root->left,root->right);
}
