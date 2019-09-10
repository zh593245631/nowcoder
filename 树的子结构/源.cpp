#include<iostream>
using namespace std;
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};
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
	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (pRoot1 && pRoot2)
		{
			if (SameTree(pRoot1, pRoot2))
				return true;
			if (HasSubtree(pRoot1->left, pRoot2))
				return true;
			if (HasSubtree(pRoot1->right, pRoot2))
				return true;
		}
		return false;
	}
	bool SameTree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (!pRoot2)
			return true;
		if (!pRoot1)
			return false;
		return (pRoot1->val == pRoot2->val) && SameTree(pRoot1->left, pRoot2->left) && SameTree(pRoot1->right, pRoot2->right);
	}
};

int main()
{
	TreeNode* p = new TreeNode(8);
	p->left= new TreeNode(8);
	p->right = new TreeNode(7);
	p->left->left = new TreeNode(9);
	p->left->right = new TreeNode(2);
	TreeNode* q = new TreeNode(8);
	q->left = new TreeNode(9);
	q->right = new TreeNode(2);
	Solution s;
	cout<<s.HasSubtree(p, q)<<endl;


	
	return 0;
}