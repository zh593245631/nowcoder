#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	string A;
	while (getline(cin, A)) {
		if (A.find("joker JOKER") != -1)
			cout << "joker JOKER" << endl;
		else {
			int mid = A.find('-');
			string str1 = A.substr(0, mid);
			string str2 = A.substr(mid + 1);

			int c1 = count(str1.begin(), str1.end(), ' ');
			int c2 = count(str2.begin(), str2.end(), ' ');

			string p1 = str1.substr(0, str1.find(' '));
			string p2 = str2.substr(0, str2.find(' '));
			string p = "345678910A2jokerJOKER";
			if (c1 == c2) {
				if (p.find(p1) > p.find(p2))
					cout << str1 << endl;
				else
					cout << str2 << endl;
			}
			else {
				if (c1 == 3)
					cout << str1 << endl;
				else if (c2 == 3)
					cout << str2 << endl;
				else
					cout << "ERROR" << endl;
			}
		}

	}
	return 0;
}