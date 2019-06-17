#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int a = 0;
		int b = 1;
		int c = 0;
		int _min = 0;
		int _max = 0;
		while (1)
		{
			c = a + b;
			a = b;
			b = c;
			if (c <= n) {
				_min = n - c;
			}
			else {
				_max = c - n;
				break;
			}
		}
		cout << min(_min, _max) << endl;
	}
	return 0;
}