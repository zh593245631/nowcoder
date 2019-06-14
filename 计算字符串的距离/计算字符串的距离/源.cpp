#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string str1, str2;
	while (getline(cin, str1))
	{
		getline(cin, str2);
		int m = str1.size();
		int n = str2.size();
		vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
		dp[0][0] = 0;
		for (int i = 1; i < m + 1; ++i)dp[i][0] = i;
		for (int j = 1; j < n + 1; ++j)dp[0][j] = j;
		for (int i = 1; i < m + 1; ++i)
		{
			for (int j = 1; j < n + 1; ++j)
			{
				int s1 = dp[i - 1][j] + 1;
				int s2 = dp[i][j - 1] + 1;
				int s3 = dp[i - 1][j - 1];
				if (str1[i - 1] != str2[j - 1])++s3;
				dp[i][j] = min(s1, s2);
				dp[i][j] = min(dp[i][j], s3);
			}
		}
		cout << dp[m][n] << endl;
	}
	return 0;
}