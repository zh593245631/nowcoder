#include<string>
#include<iostream>

using namespace std;

int main()
{
	string str;
	while (getline(cin, str))
	{
		int hash[256] = { 0 };
		for (const auto& e : str)
			++hash[e];
		bool flag = true;
		for (const auto& e : str)
		{
			if (hash[e] == 1) {
				cout << e << endl;
				flag = false;
				break;
			}
		}
		if (flag)cout << -1 << endl;
	}
	return 0;
}