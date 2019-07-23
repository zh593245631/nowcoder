// write your code here cpp
#include<iostream>
#include<vector>
using namespace std;
vector<int> a = { 1,1 };
void a_init()
{
	int i;
	for (i = 2; i < 10005; ++i)
		a.push_back((a[i - 1] + a[i - 2]) % 10000);
}
int main()
{
	int n,m;
	a_init();
	while (std::cin >> n)
	{
		while (n--)
		{
			std::cin >> m;
			printf("%04d", a[m]);	
		}
		printf("\n");
	}
	return 0;
}