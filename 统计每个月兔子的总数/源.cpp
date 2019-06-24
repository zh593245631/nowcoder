#include<iostream>
using namespace std;

int main()
{
	int month;
	while (cin >> month)
	{
		int a = 1;
		int b = 1;
		int c = 1;
		for (int i = 3; i <= month; ++i)
		{
			c = a + b;
			a = b;
			b = c;
		}
		cout << c << endl;
	}
	return 0;
}