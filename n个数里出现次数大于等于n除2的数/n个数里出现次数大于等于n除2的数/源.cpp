#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<int, int> m;
	int n;
	while (cin >> n)
	{
		++m[n];
	}

	for (const auto& e : m)
	{
		if (e.second >= m.size() / 2) {
			cout << e.first << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}