#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	string num1, num2;
	while (cin >> num1 >> num2)
	{
		string result = "";
		int carry = 0;
		int i = num1.size() - 1;
		int j = num2.size() - 1;
		while (i >= 0 || j >= 0)
		{
			if (i >= 0) {
				carry += num1[i] - '0';
				--i;
			}
			if (j >= 0) {
				carry += num2[j] - '0';
				--j;
			}
			result += (char)(carry % 10 + '0');
			carry /= 10;
		}

		if (carry)
			result += '1';
		reverse(result.begin(), result.end());
		cout << result << endl;
	}
	return 0;
}