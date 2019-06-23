#include<iostream>

using namespace std;

bool WQ(int n)
{
	int num = 0;
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0) {
			num += i;
			if (n / i != i)
				num += (n / i);
		}
	}
	if (num + 1 == n)return true;
	return false;
}
int main()
{
	int n;

	while (cin >> n)
	{
		if (n > 500000 || n < 1) {
			cout << -1 << endl;
			continue;
		}
		int count = 0;
		for (int i = 2; i <= n; ++i)
		{
			if (WQ(i))++count;
		}
		cout << count << endl;
	}
	return 0;
}