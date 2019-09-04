#include<vector>
#include<iostream>
using namespace std;
vector<long long> v;
void test(vector<long long>& v)
{
	v[2] = 2;
	v[3] = 3;
	for (int i = 4; i < v.size(); ++i)
	{
		long long m = 0;
		for (int j = 2; j <= i / 2; ++j)
		{
			long long cur = v[j] * (v[i - j]);
			if (m < cur) m = cur;
		}
		v[i] = m;
	}
	v[2] = 1;
	v[3] = 2;
}
int main()
{
	v.resize(101);
	test(v);
	int n;
	while (cin >> n)
	{
		cout << v[n] << endl;
	}
	return 0;
}