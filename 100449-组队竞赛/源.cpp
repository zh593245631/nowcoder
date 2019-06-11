#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n = 0;
	while (cin >> n)
	{
		vector<int> v;
		v.resize(3 * n);
		for (int i = 0; i < 3 * n; ++i)
			cin >> v[i];
		sort(v.begin(), v.end());
		long long sum = 0;
		for (int i = n; i < 3 * n - 1; i += 2)
		{
			sum += v[i];
		}
		cout << sum << endl;
	}
	return 0;
}