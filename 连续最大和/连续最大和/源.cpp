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
		int max = 0;
		int cur = 0;
		if (n != 0)
			max = v[0];
		for (int i = 0; i < v.size(); ++i)
		{
			cur += v[i];
			if (cur > max) {
				max = cur;
			}
			else if (cur < 0) {
				cur = 0;
			}
			else {}
		}
		cout << max << endl;
	}
	return 0;
}