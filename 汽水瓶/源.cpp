#include<iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)break;
		int count = 0;
		while (n / 3)
		{
			count += n / 3;
			n = n / 3 + n % 3;
		}
		if (n == 2)++count;
		cout << count << endl;
	}
	return 0;
}