#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	string s1;
	while (getline(cin, s1))
	{
		auto start = s1.begin();
		auto end = start;
		while (end != s1.end())
		{
			if (*end == ' ') {
				reverse(start, end);
				start = end + 1;
			}
			++end;
		}
		reverse(start, end);
		reverse(s1.begin(), s1.end());
		cout << s1 << endl;
	}

	return 0;
}

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	string cur;
//	string pre;
//	cin >> pre;
//	while (cin >> cur)
//	{
//		pre = cur + ' ' + pre;
//	}
//	cout << pre << endl;
//	return 0;
//}