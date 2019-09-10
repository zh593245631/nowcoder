//class Solution {
//public:
//	int  NumberOf1(int n) {
//		int count = 0;
//		int i = 0;
//		while (i < 64)
//		{
//			if (n & 1)++count;
//			n = n >> 1;
//			++i;
//		}
//		return count;
//	}
//};

#include<iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		int i = 0;
		while (i < 64)
		{
			if (n & 1)++count;
			n = n >> 1;
			++i;
		}
		cout << count << endl;
	}
	return 0;
}