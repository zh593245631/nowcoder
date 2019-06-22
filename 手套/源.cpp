class Gloves {
public:
	int findMinimum(int n, vector<int> left, vector<int> right) {
		// write code here
		int ret = 0;
		int leftmin = INT_MAX;
		int rightmin = INT_MAX;
		int leftnum = 0;
		int rightnum = 0;
		for (int i = 0; i < n; ++i)
		{
			if (left[i] * right[i] == 0) {
				ret += left[i] + right[i];
			}
			else {
				leftnum += left[i];
				rightnum += right[i];
				leftmin = min(leftmin, left[i]);
				rightmin = min(rightmin, right[i]);
			}
		}
		return ret + min(leftnum - leftmin + 1, rightnum - rightmin + 1) + 1;
	}
};