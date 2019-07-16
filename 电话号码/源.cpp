#include<iostream>
#include<set>
#include<map>

using namespace std;
//map<int,int> ans = {{1,1},{2,2},{3,3},{4,4}, {5,5},{6,6}, {7,7},{8,8}, {9,9},{'A',2}, }
map<char, char> ans = { {'0','0'}, {'1','1'},{'2','2'},{'3','3'},{'4','4'}, {'5','5'},{'6','6'}, {'7','7'},{'8','8'}, {'9','9'},{'A','2'}, {'B','2'}, {'C','2'}, {'D','3'}, {'E','3'}, {'F','3'}, {'G','4'},
					{'H','4'}, {'I','4'}, {'J','5'}, {'K','5'}, {'L','5'}, {'M','6'}, {'N','6'}, {'O','6'},
					{'P','7'}, {'Q','7'}, {'R','7'}, {'S','7'}, {'T','8'}, {'U','8'}, {'V','8'}, {'W','9'},
					{'X','9'}, {'Y','9'}, {'Z','9'}};
//map<int, int> ans = { {1,1},{2,2},{3,3},{4,4}, {5,5},{6,6}, {7,7},{8,8}, {9,9},{65,2}, {66,2}, {67,2}, {68,3}, {69,3}, {70,3}, {71,4},
//					{72,4}, {73,4}, {74,5}, {75,5}, {76,5}, {77,6}, {78,6}, {79,6},
//					{80,7}, {81,7}, {82,7}, {83,7}, {84,8}, {85,8}, {86,8}, {87,9},
//					{88,9}, {89,9}, {90,9} };
int main()
{
	//for (auto& e : ans)
	//	cout << e.first << "----" << e.second << endl;
	//cout << ans[75] << endl;
	int n;
	while (cin >> n)
	{
		set<string> z;
		string tmp;
		while (n--)
		{
			cin >> tmp;
			auto vit = tmp.begin();
			while (vit != tmp.end())
			{
				if (*vit == '-') {
					vit = tmp.erase(vit);
				}
				else {
					//int tmp = *vit;
					*vit = ans[*vit];
					++vit;
				}
			}
			tmp.insert(tmp.begin() + 3, '-');
			z.insert(tmp);
		}
		for (const auto& e : z)
			cout << e << endl;
		cout << endl;
	}
	return 0;
}

	/*12
	4873279
	ITS-EASY
	888-4567
	3-10-10-10
	888-GLOP
	TUT-GLOP
	967-11-11
	310-GINO
	F101010
	888-1200
	-4-8-7-3-2-7-9-
	487-3279
	4 < br / > UTT - HELP<br / >TUT - GLOP < br / >310 - GINO < br / >000 - 1213*/