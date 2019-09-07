#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:
	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
		if (pre.size() == 0 && vin.size() == 0)return nullptr;
		TreeNode* root = new TreeNode(pre[0]);

		auto ret = find(vin.begin(),vin.end(), pre[0]) - vin.begin();

		vector<int> lpre(pre.begin() + 1, pre.begin() + ret + 1);
		vector<int> rpre(pre.begin() + ret + 1, pre.end());
		vector<int> lvin(vin.begin(), vin.begin() + ret);
		vector<int> rvin(vin.begin() + ret + 1, vin.end());
		root->left = reConstructBinaryTree(lpre, lvin);
		root->right = reConstructBinaryTree(rpre, rvin);
		return root;
	}
};

int main()
{
	vector<int> v1 = { 1,2,4,7,3,5,6,8 };
	vector<int> v2 = { 4,7,2,1,5,3,8,6 };
	Solution s;
	TreeNode* root = s.reConstructBinaryTree(v1, v2);
	return 0;
}