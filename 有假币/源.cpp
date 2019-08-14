// write your code here cpp
#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	while (cin >> n)
	{
		if (n == 0)break;
		int count = 0;
		long long  num = 1;
		while (num < n)
		{
			num *= 3;
			++count;
		}
		cout << count << endl;
	}
	return 0;
}