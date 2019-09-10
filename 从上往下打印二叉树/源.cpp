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
	vector<int> PrintFromTopToBottom(TreeNode* root) {
		if (root == nullptr)return{};

		queue<TreeNode*> tmp;
		vector<int> ans;
		TreeNode* last = root;
		tmp.push(root);
		while (!tmp.empty())
		{
			TreeNode* cur = tmp.front();
			ans.push_back(cur->val);
			tmp.pop();
			TreeNode* nlast;
			if (cur->left)
			{
				tmp.push(cur->left);
				nlast = cur->left;
			}
			if (cur->right)
			{
				tmp.push(cur->right);
				nlast = cur->left;
			}
			if (cur == last)
			{
				last = nlast;
			}
		}
		return ans;
	}
};