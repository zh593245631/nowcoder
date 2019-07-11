// write your code here cpp
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string s, t;
	while (cin >> s >> t)
	{
		int cur = s.find(t);
		if (cur == -1) {
			cout << 0 << endl;
		}
		else {
			int count = 0;
			do {
				++count;
				cur += t.size();
				cur = s.find(t, cur);
			} while (cur < s.size() && cur != -1);
			cout << count << endl;
		}
	}
	return 0;
}