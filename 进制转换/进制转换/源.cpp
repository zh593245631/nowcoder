#include<iostream>

using namespace std;

void JZ(int m, int n)
{
	if (m == 0)return;
	JZ(m / n, n);
	int ret = m % n;
	if (ret > 9)
		cout << (char)('A' + ret % 10);
	else
		cout << ret;
}
int main()
{
	int M, N;
	while (cin >> M >> N)
	{
		if (M < 0) {
			cout << "-";
			M = -M;
		}
		JZ(M, N);
	}
	return 0;
}