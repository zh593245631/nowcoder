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
private:
	vector<vector<int>> ans;
	vector<int> tmp;
	void find(TreeNode* root, int sum)
	{
		if (root == nullptr)return;
		tmp.push_back(root->val);
		if (!root->left && !root->right && sum == root->val)
		{
			ans.push_back(tmp);
		}
		else
		{
			find(root->left, sum - root->val);
			find(root->right, sum - root->val);
		}
		tmp.pop_back();
	}
public:
	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
		find(root, expectNumber);
		return ans;
	}
};