	#include<vector>
	#include<iostream>
	#include<stack>
	using namespace std;

	int m, n;
	vector<vector<int>> maze;
	vector<vector<int>> cur_path;
	vector<vector<int>> best_path;

	void FindPath(int x, int y)
	{
		maze[x][y] = 1;
		cur_path.push_back({ x,y });
	
		if (x == m-1 && y == n-1) {
			if(best_path.empty()||best_path.size()>cur_path.size())
			best_path = cur_path;
		}
		else {
			if (x - 1 >= 0 && maze[x - 1][y] == 0) {
				FindPath(x - 1, y);
			}
			if (x + 1 < m && maze[x + 1][y] == 0) {
				FindPath(x + 1, y);
			}
			if (y - 1 >= 0 && maze[x][y - 1] == 0) {
				FindPath(x, y - 1);
			}
			if (y + 1 < n && maze[x][y + 1] == 0) {
				FindPath(x, y + 1);
			}
		}
		maze[x][y] = 0;
		cur_path.pop_back();
	}

	int main()
	{
		while (cin >> m >> n)
		{
			cur_path.clear();
			best_path.clear();
			maze = vector<vector<int>>(m, vector<int>(n, 0));
			for (int i = 0; i < m; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					cin >> maze[i][j];
				}
			}

			FindPath(0, 0);
			for (const auto& e : best_path)
				cout << "(" << e[0] << "," << e[1] << ")" << endl;
		}
		return 0;
	}