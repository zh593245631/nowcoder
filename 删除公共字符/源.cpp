#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str1;
	string str2;
	while (getline(cin, str1))
	{
		getline(cin, str2);
		char hash[256] = { 0 };
		for (const auto& e : str2)
		{
			++hash[e];
		}
		string ret;
		for (int i = 0; i < str1.size(); ++i)
		{
			if (hash[str1[i]] == 0) {
				ret += str1[i];
			}
		}
		cout << ret << endl;
	}
	return 0;
}