#include<map>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	while (getline(cin, str))
	{
		map<char, int> m;
		for (int i = 0; i < str.size(); ++i)
		{
			if (!m.insert(make_pair(str[i], i)).second){
				m.erase(str[i]);
			}
		}
		if (m.empty())
			cout << -1 << endl;
			int min = str.size();
			for (const auto& e : m)
			{
				if (min > e.second) {
					min = e.second;
				}
			}
		cout << str[min] << endl;
	}
	return 0;
}