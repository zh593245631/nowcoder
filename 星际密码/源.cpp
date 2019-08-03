#include<iostream>
#include<vector>
using namespace std;

vector<int> a = { 1,1 };
void init()
{
	for (int i = 2; i <= 10000; ++i)
		a.push_back((a[i - 1] + a[i - 2]) % 10000);
}
int main()
{
	init();
	int n;
	while (cin >> n)
	{
		while (n--)
		{
			int x;
			cin >> x;
			printf("%04d", a[x]);
		}
		printf("\n");
	}
	return 0;
}