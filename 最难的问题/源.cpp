#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string b = "VWXYZABCDEFGHIJKLMNOPQRSTU";
	char hash[256] = { 0 };
	for (int i = 0; i < 26; ++i)
	{
		hash[a[i]] = b[i];
	}

	string str;
	while (getline(cin, str))
	{
		for (const auto& e : str)
		{
			if (e == ' ')
				cout << " ";
			else
				cout << hash[e];
		}
		cout << endl;
	}
	return 0;
}