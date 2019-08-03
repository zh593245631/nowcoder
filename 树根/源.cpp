// write your code here cpp
#include<iostream>
#include<string>
using namespace std;

int Add(int n)
{
	int ans = 0;
	while (n > 0)
	{
		ans += n % 10;
		n /= 10;
	}
	return ans;
}
int main()
{
	string n;
	while (cin >> n)
	{
		int sum = 0;
		for (int i = 0; i < n.size(); ++i)
			sum += n[i] - '0';
		while (sum > 9)
		{
			sum = Add(sum);
		}
		cout << sum << endl;
	}
	return 0;
}