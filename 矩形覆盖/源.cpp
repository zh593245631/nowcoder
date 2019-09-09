class Solution {
public:
	int rectCover(int number) {
		int a = 0;
		int b = 1;
		int c = 0;
		for (int i = 1; i <= number; ++i)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
};