#include<iostream>
#include<algorithm>

using namespace std;

#if 0
int main()
{
	string str;
	while (getline(cin, str))
	{
		reverse(str.begin(), str.end());
		cout << str << endl;
	}
	return 0;
}
#endif

int main()
{
	string str;
	while (getline(cin, str))
	{
		for (int i = 0; i < str.size() / 2; ++i)
		{
			swap(str[i], str[str.size() - i - 1]);
		}
		cout << str << endl;
	}
	return 0;
}