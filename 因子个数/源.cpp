#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int k = 0;
		for (int i = 2; i * i <= n; ++i)
		{
			if (n % i == 0) {
				while (n % i == 0)n /= i;
				++k;
			}
		}
		if (n != 1)++k;
		cout << k << endl;

	}
	return 0;
}