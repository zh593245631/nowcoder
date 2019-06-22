#include<vector>
#include <algorithm>
#include<iostream>
using namespace std;
vector<int> v;
int n;
long long _count;
long long sum, jum;
void dfs(int index)
{
	for (int i = index; i < n; i++)
	{
		sum += v[i];
		jum *= v[i];
		if (sum > jum)
		{
			++_count;
			dfs(i + 1);
		}
		else if (v[i] == 1)
		{
			dfs(i + 1);
		}
		else {
			sum -= v[i];
			jum /= v[i];
			break;
		}
		sum -= v[i];
		jum /= v[i];
		for (; i < n - 1 && v[i] == v[i + 1]; ++i);//ШЅжи
	}
}
int main()
{
	while (cin >> n)
	{
		_count = 0;
		sum = 0;
		jum = 1;
		v.resize(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		sort(v.begin(), v.end());
		dfs(0);
		cout << _count << endl;
	}
	return 0;
}