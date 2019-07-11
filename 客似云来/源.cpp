// write your code here cpp
// write your code here cpp
#include<iostream>
#include<vector>
using namespace std;

vector<long long> ans;
void test()
{
	long long a = 1;
	long long b = 1;
	long long  c = 1;
	ans.push_back(1);
	ans.push_back(1);
	for (int i = 3; i <= 80; ++i)
	{
		c = a + b;
		a = b;
		b = c;
		ans.push_back(c);
	}
}
int main()
{
	test();
	//for (const auto& e : ans)
	//	cout << e << " ";
	int from, to;
	while (cin >> from >> to)
	{
		long long result = 0;
		for (int i = from - 1; i < to; ++i)
			result += ans[i];
		cout << result << endl;
	}
	return 0;
}