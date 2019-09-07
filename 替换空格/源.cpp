#include<iostream>

using namespace std;

class Solution {
public:
	void replaceSpace(char* str, int length) {
		if (str == NULL)return;

		//1.计算空格的数量
		int replaceNum = 0;
		char* tmp = str;
		while (tmp&&*tmp != '\0')
		{
			if (*tmp == ' ')
				++replaceNum;
			++tmp;
		}
		//2.替换后字符串的长度
		int newLength = length + replaceNum * 2;
		//3.开始替换
		while (newLength >= 0 && newLength > length)
		{
			if (str[length] == ' ')
			{
				str[newLength--] = '0';
				str[newLength--] = '2';
				str[newLength--] = '%';
			}
			else
			{
				str[newLength--] = str[length];
			}
			--length;
		}

	}
};

int main()
{
	Solution s;
	char str[] = "we are you";
	s.replaceSpace(str, strlen(str));
	return 0;
}