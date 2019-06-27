#include<iostream>
#include<string>
#include<vector>
using namespace std;
int Len(string& a, string& b)
{
	int n = a.size();
	int m = b.size();
	vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
	dp[0][0] = 0;
	for (int i = 1; i <= n; ++i)dp[i][0] = i;
	for (int j = 1; j <= m; ++j)dp[0][j] = j;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			//²åÈë/É¾³ý
			int one = dp[i - 1][j] + 1;//a²åb
			int two = dp[i][j - 1] + 1;//b²åa
			//Ìæ»»
			int tree = dp[i - 1][j - 1];
			if (a[i - 1] != b[j - 1])++tree;
			dp[i][j] = min(min(one, two), tree);
		}
	}
	return dp[n][m];
}
int main()
{
	string str1, str2;
	while (getline(cin, str1))
	{
		getline(cin, str2);
		cout << Len(str1, str2) << endl;
	}
	return 0;
}