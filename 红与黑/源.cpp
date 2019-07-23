
#include<iostream>
#include<vector>
#include<string>

using namespace std;
int m, n;
int scount = 0;
vector<vector<char>> v;
void dfs(int i, int j)
{
	v[i][j] = '#';
	if (i + 1 < m && v[i + 1][j] == '.') {
		++scount;
		dfs(i + 1, j);
	}
	if (i > 0 && v[i - 1][j] == '.') {
		++scount;
		dfs(i - 1, j);
	}
	if (j + 1 < n && v[i][j+1] == '.') {
		++scount;
		dfs(i , j+1);
	}
	if (j > 0 && v[i][j - 1] == '.') {
		++scount;
		dfs(i, j - 1);
	}
}
int main()
{
	while (cin >> m >> n)
	{
		scount = 0;
		v.clear();
		v = vector<vector<char>>(m, vector<char>(n, '.'));
		int reti = 0;
		int retj = 0;
		string line;
		for (int i = 0; i < m; ++i) {
			cin >> line;
			for (int j = 0; j < n; ++j)
			{
				v[i][j] = line[j];
				if (v[i][j] == '@') {
					reti = i;
					retj = j;
				}
			}
		}
		dfs(reti, retj);
		cout << scount+1 << endl;
	}
	return 0;
}

//9 6
//....#.
//.....#
//......
//......
//......
//......
//......
//#@...#
//.#..#.