#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
		dp[0][0] = 0;
		for (int i = 1; i <= m; ++i)dp[i][0] = 1;
		for (int j = 1; j <= n; ++j)dp[0][j] = 1;
		for (int i = 1; i <= m; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
		}
		cout << dp[m][n] << endl;
	}
	return 0;
}