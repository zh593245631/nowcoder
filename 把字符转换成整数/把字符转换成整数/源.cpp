class Solution {
public:
	int StrToInt(string str) {

		int ans = 0;
		for (int i = 0; i < str.size(); ++i)
		{
			if (i == 0 && (str[i] == '+' || str[i] == '-')) {

			}
			else if (str[i] >= '0' && str[i] <= '9') {
				ans = ans * 10 + (str[i] - '0');
			}
			else {
				return 0;
			}
		}

		if (str[0] == '-') {
			ans = -ans;
		}
		return ans;
	}
};