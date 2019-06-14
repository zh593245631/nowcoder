#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str, cur, max;
	while (getline(cin, str))
	{
		for (int i = 0; i <= str.size(); ++i)
		{
			if (str[i] >= '0' && str[i] <= '9') {
				cur += str[i];
			}
			else
			{
				if (max.size() < cur.size())
					max = cur;
				cur.clear();
			}
		}
		cout << max << endl;
	}
	return 0;
}