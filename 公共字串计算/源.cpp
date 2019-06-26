#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	int max = 0;
	for (int i = 0; i < str1.size(); ++i)
	{
		int left = i;
		for (int j = 0; j < str2.size(); ++j)
		{
			int tmp = j;
			while (i < str1.size() && j < str2.size() && str1[i] == str2[j])
			{
				++i;
				++j;
			}
			if (max < i - left)
				max = i - left;

			i = left;
			j = tmp;
		}
	}
	cout << max << endl;
	return 0;
}