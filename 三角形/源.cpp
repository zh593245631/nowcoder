#include<iostream>
using namespace std;

int main()
{
	double a, b, c;
	while (cin >> a >> b >> c)
	{
		if ((a + b) > c && (a + c) > b && (b + c) > a)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}