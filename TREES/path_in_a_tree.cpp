#include <bits/stdc++.h>
/*
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
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
*/

bool fun(TreeNode<int>*node, vector<int>&ans, int x)
{
	if(node==NULL)
	{
		return false;
	}
	ans.push_back(node->data);
	if(node->data == x)
	{
		return true;
	}

	if(fun(node->left,ans,x) || fun(node->right,ans,x))
	{
		return true;
	}
	ans.pop_back();
	return false;
}

vector<int> pathInATree(TreeNode<int> *root, int x)
{
	vector<int>ans;
	fun(root,ans,x);
	return ans;
}
