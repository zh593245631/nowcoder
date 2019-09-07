class Solution {
public:
	int jumpFloor(int number) {
		if (number < 2)return number;
		int a = 1;
		int b = 1;
		int c = 0;
		for (int i = 2; i <= number; ++i)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
};