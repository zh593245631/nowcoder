#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main()
{
	string cmd;
	while (getline(cin, cmd))
	{
		vector<string> ans;
		int start = 0;
		int last = 0;
		do {
			if (cmd[start] == '\"') {
				last = cmd.find('\"', ++start);
			}
			else {
				last = cmd.find(' ', start);
			}
			string tmp = cmd.substr(start, last - start);
			ans.push_back(tmp);
			start = last + 1;
		} while (last != -1);
		cout << ans.size() << endl;
		for (const auto& e : ans)
			cout << e << endl;
	}
	return 0;
}