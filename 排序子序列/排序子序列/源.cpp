#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> v;
		v.resize(n);
		for (int i = 0; i < n; ++i)
			cin >> v[i];
		int ans = 0;
		for (int i = 1; i < n - 1; ++i)
		{
			if ((v[i] > v[i - 1] && v[i] > v[i + 1]) || (v[i] < v[i - 1] && v[i] < v[i + 1]))
			{
				++ans;
				if (i == n - 3)continue;
				++i;
			}
		}
		cout << ans + 1 << endl;
	}
	return 0;
}