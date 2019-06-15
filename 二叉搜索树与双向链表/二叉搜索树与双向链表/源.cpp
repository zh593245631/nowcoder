/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
	TreeNode* first = nullptr;
	TreeNode* prev = nullptr;
	TreeNode* Convert(TreeNode* pRootOfTree)
	{
		inorder(pRootOfTree);
		return first;
	}
	void inorder(TreeNode* root)
	{
		if (root) {
			inorder(root->left);
			Treesort(root);
			inorder(root->right);
		}
	}
	void Treesort(TreeNode* root)
	{
		root->left = prev;
		if (prev)
			prev->right = root;
		else
			first = root;
		prev = root;
	}
};