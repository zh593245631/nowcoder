#include<iostream>

using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		int ret = 1;
		int count = 0;
		while (ret != 0)
		{
			if (ret & num)++count;
			ret = ret << 1;
		}
		cout << count << endl;
	}
	return 0;
}