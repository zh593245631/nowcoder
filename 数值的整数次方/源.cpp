class Solution {
public:
	double Power(double base, int exponent) {
		//return pow(base,exponent);
		if (base == 0 || base == 1)
			return base;
		if (exponent == 0)
			return 1;
		if (exponent == 1)
			return base;

		int i = 0;
		double ans = 1.0;
		if (exponent < 0)
		{
			base = 1.0 / base;
			exponent = -exponent;
		}
		while (i < exponent)
		{
			ans *= base;
			++i;
		}
		return ans;
	}
};