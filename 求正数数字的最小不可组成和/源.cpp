#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	/**
	 *	正数数组中的最小不可组成和
	 *	输入：正数数组arr
	 *	返回：正数数组中的最小不可组成和
	 */
	int getFirstUnFormedNum(vector<int> arr, int len) {
		int max = 0, min = 0x7fffffff;
		for (int i = 0; i < len; ++i)
		{
			max += arr[i];
			if (min > arr[i]) {
				min = arr[i];
			}
		}
		vector<int> dp(max + 1, 0);
		for (int i = 0; i < len; ++i)
		{
			for (int j = max; j >= arr[i]; --j)
			{
				if (dp[j] < dp[j - arr[i]] + arr[i]) {
					dp[j] = dp[j - arr[i]] + arr[i];
				}
			}
		}
		for (int i = min; i <= max; ++i)
		{
			if (i != dp[i])
				return i;
		}
		return max + 1;
	}
};

int main()
{
	Solution s;
	vector<int> arr = { 2,3,5 };
	int result = s.getFirstUnFormedNum(arr, arr.size());
	cout << result << endl;
	return 0;
}