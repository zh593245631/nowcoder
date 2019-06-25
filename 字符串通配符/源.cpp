#include<iostream>
#include<string>
using namespace std;

bool Pp(const char* a, const char* b)
{
	if (*a == '\0' && *b == '\0')
		return true;
	if (*a == '\0' || *b == '\0')
		return false;
	if (*a == '?' || *a == *b)
		return Pp(a + 1, b + 1);
	else if (*a == '*')
		return Pp(a + 1, b) || Pp(a + 1, b + 1) || Pp(a, b + 1);
	else
		return false;
}
int main()
{
	string str1, str2;
	while (getline(cin, str1))
	{
		getline(cin, str2);
		if (Pp(str1.c_str(), str2.c_str()))
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	return 0;
}