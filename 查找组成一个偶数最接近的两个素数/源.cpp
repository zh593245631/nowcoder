#include<iostream>
#include<math.h>
using namespace std;

bool isS(int num)
{
	for (int i = 2; i <= sqrt(num); ++i)
	{
		if (num % i == 0)return false;
	}
	return true;
}
int main()
{
	int num;
	while (cin >> num)
	{
		int ret = num / 2;
		for (int i = ret; i < num; ++i)
		{
			if (isS(i) && isS(num - i)) {
				cout << num - i << endl;
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}