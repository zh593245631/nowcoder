#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
	int N, M;
	while (cin >> N >> M)
	{
		vector<int> map(M + 1, INT_MAX);
		map[N] = 0;
		for (int i = N; i < M; ++i)
		{
			if (map[i] == INT_MAX)continue;

			for (int j = 2; j <= sqrt(i); ++j)
			{
				if (i % j == 0) {
					if (j + i <= M)
						map[j + i] = min(map[j + i], map[i] + 1);
					if (i / j + i <= M)
						map[i / j + i] = min(map[i / j + i], map[i] + 1);
				}
			}
		}
		if (map[M] == INT_MAX)
			cout << -1 << endl;
		else
			cout << map[M] << endl;
	}
	return 0;
}