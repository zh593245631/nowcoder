#include<iostream>
#include<vector>

using namespace std;
int m, n, p;
int pc, pb;
vector<vector<int>> mp;
vector<vector<int>> cur;
vector<vector<int>> best;

void play(int x, int y)
{
	mp[x][y] = 0;
	cur.push_back({ x,y });
	if (x == 0 && y == n - 1) {
		if (pc <= p && (pc < pb || pb == 0)) {
			pb = pc;
			best = cur;
		}
	}
	else {
		if (x + 1 < m && mp[x + 1][y] == 1) {
			play(x + 1, y);
		}
		if (x - 1 >= 0 && mp[x - 1][y] == 1) {
			pc += 3;
			play(x - 1, y);
			pc -= 3;
		}
		if (y + 1 < n && mp[x][y + 1] == 1) {
			pc += 1;
			play(x, y + 1);
			pc -= 1;
		}
		if (y - 1 >= 0 && mp[x][y - 1] == 1) {
			pc += 1;
			play(x, y - 1);
			pc -= 1;
		}
	}
	mp[x][y] = 1;
	cur.pop_back();
}
int main()
{
	while (cin >> m >> n >> p)
	{
		pc = 0;
		cur.clear();
		best.clear();
		mp = vector<vector<int>>(m, vector<int>(n, 0));
		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j) {
				cin >> mp[i][j];
			}
		}
		play(0, 0);
		if (pb == 0) {
			cout << "Can not escape!" << endl;
		}
		else {
			for (int i = 0; i < best.size(); ++i) {
				cout << "[" << best[i][0] << "," << best[i][1] << "]";
				if (i != best.size() - 1)
					cout << ",";
			}
		}
	}

	return 0;
}