// write your code here cpp
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	while (cin >> n && n != 0)
	{
		long long a = pow(5, n) - 4;
		long long b = pow(4, n) + n - 4;
		cout << a << " " << b << endl;
	}
}