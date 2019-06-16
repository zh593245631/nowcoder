#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
bool Ihw(string& str)
{
	size_t begin = 0;
	size_t end = str.size() - 1;
	while (begin < end)
	{
		if (str[begin] != str[end])return false;
		++begin;
		--end;
	}
	return true;
}
int main()
{
	string A, B;
	while (getline(cin, A))
	{
		getline(cin, B);
		size_t count = 0;
		for (size_t i = 0; i <= A.size(); ++i)
		{
			string tmp(A);
			tmp.insert(i, B);
			if (Ihw(tmp))++count;
		}
		cout << count << endl;
	}
	return 0;
}