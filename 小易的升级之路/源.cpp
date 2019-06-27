#include<iostream>
#include<vector>

using namespace std;

int mY(int a, int b)
{
	int c = 0;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int main()
{
	int n, a;
	while (cin >> n >> a)
	{
		int b;
		for (int i = 0; i < n; ++i) {
			cin >> b;
			if (b <= a)
				a += b;
			else
				a += mY(b, a);
		}
		cout << a << endl;

	}
	return 0;
}