#include<iostream>
#include<vector>

using namespace std;

int _U(int a, vector<int>& v, int n)
{
	if (v[0] != a) {
		--a;
	}
	else {
		if (a == 1) {
			for (int i = 0; i < v.size(); ++i) {
				v[i] = n - v.size() + 1 + i;
			}
			a = n;
		}
		else {
			int tmp = v[0] - 1;
			for (int i = v.size() - 1; i > 0; --i) {
				v[i] = v[i - 1];
			}
			v[0] = tmp;
			a = v[0];
		}
	}
	return a;
}
int _D(int a, vector<int>& v, int n)
{
	if (v[v.size() - 1] != a) {
		++a;
	}
	else {
		if (a == n) {
			for (int i = 0; i < v.size(); ++i) {
				v[i] = 1 + i;
			}
			a = 1;
		}
		else {
			int tmp = v[v.size() - 1] + 1;
			for (int i = 0; i < v.size() - 1; ++i) {
				v[i] = v[i + 1];
			}
			v[v.size() - 1] = tmp;
			a = tmp;
		}
	}
	return a;
}
int main()
{
	int n;
	string s;
	while (cin >> n)
	{
		cin >> s;
		int ans = 1;
		vector<int> v;
		int a = 1;
		for (int i = 1; i <= n && i <= 4; ++i)
		{
			v.push_back(i);
		}
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] == 'U')
				a = _U(a, v, n);
			if (s[i] == 'D')
				a = _D(a, v, n);
		}
		for (const auto& e : v)
			cout << e << " ";
		cout << endl;
		cout << a << endl;
	}
	return 0;
}