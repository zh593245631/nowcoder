#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		if (n < 3)
			cout << -1 << endl;
		else if (n % 2)
			cout << 2 << endl;
		else if (n % 4 == 0)
			cout << 3 << endl;
		else
			cout << 4 << endl;
	}
}