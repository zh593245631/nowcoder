//class Solution {
//public:
//	int Sum_Solution(int n) {
//		int ans = n;
//		ans && (ans += Sum_Solution(n - 1));
//		return ans;
//	}
//};

class Solution
{
public:
	Solution()
	{
		++N;
		Sum += N;
	}
	int Sum_Solution(int n)
	{
		N = 0;
		Sum = 0;
		Solution* a = new Solution[n];
		delete[]a;
		a = nullptr;

		return Sum;
	}
private:
	static int N;
	static int Sum;
};

int Solution::N = 0;
int Solution::Sum = 0;