#include<iostream>

using namespace std;

int main()
{
	int w, h;
	while (cin >> w >> h)
	{
		if (w % 4 == 0 || h % 4 == 0) {
			cout << (w * h / 2) << endl;
		}
		else if (w % 2 == 0 && h % 2 == 0) {
			cout << (w * h / 2 + 2) << endl;
		}
		else {
			cout << (w * h / 2 + 1) << endl;
		}
	}
	return 0;
}