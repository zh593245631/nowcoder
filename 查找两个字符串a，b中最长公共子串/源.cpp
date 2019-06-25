#include<iostream>
#include<string>

using namespace std;
int main()
{
	string str1, str2;
	while (getline(cin, str1))
	{
		getline(cin, str2);
		if (str1.size() > str2.size())
			swap(str1, str2);
		int mstart = 0;
		int max = 0;
		for (int i = 0; i < str1.size(); ++i)
		{
			int start = i;
			for (int j = 0; j < str2.size(); ++j)
			{
				int tmp = j;
				while (i < str1.size() && str1[i] == str2[j])
				{
					++j;
					++i;
				}
				int right = i;
				i = start;
				j = tmp;
				if (max < right - start) {
					mstart = start;
					max = right - start;
				}
			}
		}
		string s = str1.substr(mstart, max);
		cout << s << endl;
	}
	return 0;
}