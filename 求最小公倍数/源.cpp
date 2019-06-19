#include<iostream>
using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		int ab = a * b;
		int c = 0;
		while (b != 0)
		{
			c = a % b;
			a = b;
			b = c;
		}
		cout << ab / a << endl;
	}
	return 0;
}