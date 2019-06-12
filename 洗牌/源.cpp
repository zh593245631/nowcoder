//#include<iostream>
//#include<vector>
//using namespace std;
//
//void Xp(vector<long long>& v, int n)
//{
//	int j = 0;
//	for (int i = 1; i < 2 * n - 1; ++i)
//	{
//		if (i % 2) {
//			swap(v[i], v[n + j]);
//		}
//		else if (i < n) {
//			swap(v[i], v[n + j]);
//			++j;
//		}
//		else {
//			++j;
//		}
//	}
//}
//int main()
//{
//	int T;
//	cin >> T;
//	for (int i = 0; i < T; ++i)
//	{
//		int n, k;
//		while (cin >> n >> k)
//		{
//			vector<long long> v;
//			v.resize(2 * n);
//			for (int j = 0; j < 2 * n; ++j)
//				cin >> v[j];
//			while (k)
//			{
//				Xp(v, n);
//				--k;
//			}
//			for (const auto& e : v)
//				cout << e << " ";
//			cout << endl;
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<vector>
using namespace std;

void Xp(vector<int>& v, int n)
{
	int j = 0;
	for (int i = 1; i < 2 * n - 1; ++i)
	{
		if (i % 2) {
			swap(v[i], v[n + j]);
		}
		else if (i < n) {
			swap(v[i], v[n + j]);
			++j;
		}
		else {
			++j;
		}
	}
}
int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		int n, k;
		while (cin >> n >> k)
		{
			vector<int> v;
			v.resize(2 * n);
			for (int j = 0; j < 2 * n; ++j)
				cin >> v[j];
			while (k--)
			{
				vector<int> tmp(v.begin(), v.end());
				for (int i = 0; i < n; ++i)
				{
					v[i * 2] = tmp[i];
					v[i * 2 + 1] = tmp[n + i];
				}
			}
			for (const auto& e : v)
				cout << e << " ";
			cout << endl;

		}
	}
	return 0;
}

