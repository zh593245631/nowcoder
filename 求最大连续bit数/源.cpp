#include<iostream>
using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		int maxc = 0;
		int count = 0;
		while (num)
		{
			if (num & 1) {
				++count;
			}
			else {
				count = 0;
			}
			num = num >> 1;
			if (maxc < count) {
				maxc = count;
			}
		}
		cout << maxc << endl;

	}
	return 0;
}