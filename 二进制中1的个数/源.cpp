class Solution {
public:
	int  NumberOf1(int n) {
		int count = 0;
		int i = 0;
		while (i < 32)
		{
			if (n & 1)++count;
			n = n >> 1;
			++i;
		}
		return count;
	}
};