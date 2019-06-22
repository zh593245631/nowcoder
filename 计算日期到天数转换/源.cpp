#include<iostream>
using namespace std;

bool Ryear(int year)
{
	return (year % 400 == 0) || (year % 4 == 0 && year % 100);
}
int arr[13] = { 0,31,59,90,120,151,181,212,243,273,304,334,365 };
int main()
{
	int year, month, day;
	while (cin >> year >> month >> day)
	{
		int days = 0;
		if (month > 2) {
			if (Ryear(year)) {
				++days;
			}
		}
		days += (day + arr[month - 1]);
		cout << days << endl;
	}
	return 0;
}