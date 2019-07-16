// write your code here cpp
#include<iostream>
using namespace std;

int main()
{
	string str;
	while (cin >> str)
	{
		auto vit = str.begin();
		while (vit!=str.end())
		{
			if (*vit == '_')
			{
				vit = str.erase(vit);
				*vit = *vit - 'a' + 'A';
			}
			else {
				++vit;
			}
		}
		cout << str << endl;
	}
	return 0;
}