class Solution {
public:
	bool VerifySquenceOfBST(vector<int> sequence) {
		if (!sequence.size())return false;
		return VerifySquenceOfBST(sequence, 0, sequence.size() - 1);
	}
	bool VerifySquenceOfBST(vector<int> v, int l, int r) {
		if (l >= r) return true;
		int i = r;
		while (i > l && v[i - 1] > v[r]) --i;
		for (int j = i - 1; j >= l; --j)
		{
			if (v[j] > v[r])return false;
		}
		return VerifySquenceOfBST(v, l, i - 1) && VerifySquenceOfBST(v, i, r - 1);
	}
};