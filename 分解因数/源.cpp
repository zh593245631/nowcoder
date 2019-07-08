// write your code here cpp
#include<iostream>
using namespace std;
int main()
{
	int a;
	while (cin >> a)
	{
		cout << a << " = ";
		for (int i = 2; i * i <= a; ++i)
		{
			if (a % i == 0) {
				while (a % i == 0) {
					a /= i;
					cout << i;
					if (a != 1)cout << " * ";
				}
			}
		}
		if (a != 1)cout << a;
		cout << endl;
	}
	return 0;
}