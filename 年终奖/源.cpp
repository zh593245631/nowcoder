class Bonus {
public:
	int getMost(vector<vector<int> > board) {
		// write code here
		int n = board.size();
		int m = board.size();
		for (int i = 1; i < n; ++i)board[i][0] += board[i - 1][0];
		for (int j = 1; j < m; ++j)board[0][j] += board[0][j - 1];
		for (int i = 1; i < n; ++i)
		{
			for (int j = 1; j < m; ++j)
			{
				board[i][j] += max(board[i - 1][j], board[i][j - 1]);
			}
		}
		return board[n - 1][m - 1];
	}
};