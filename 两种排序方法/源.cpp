#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<string> v;
		v.resize(n);
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
		}
		int dir = 0;
		int len = 0;
		for (int i = 1; i < n; ++i)
		{
			if (v[i - 1] < v[i]) {
				++dir;
			}
			if (v[i - 1].size() < v[i].size()) {
				++len;
			}
		}
		if (dir == len && dir == n-1)
		{
			cout << "both" << endl;
		}
		else if (dir == n - 1) {
			cout << "lexicographically" << endl;
		}
		else if (len == n - 1) {
			cout << "lengths" << endl;
		}
		else {
			cout << "none" << endl;
		}
	}
	return 0;
}