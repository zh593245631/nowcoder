#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
#include<set>
#include<vector>

#define MAX_N 5000005
using namespace std;

int first[10000], second[10000];
int v[MAX_N];

int main() {
	int n; scanf("%d", &n);
	set<int> key;
	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
		key.insert(v[i]);
	}
	int num = key.size();
	//求解
	int i = 0, j = 0;
	int count = 0;
    map<int, int> appear;

	while (i <= j && j <= n) {
		//找齐了数字
		if (appear.size() == num) {
			//第一次出现全部数字，或者出现的数字的区间等于最小的区间
			if (count == 0 || second[count - 1] - first[count - 1] == j - i - 1) {
				//区间编号从1到N
				first[count] = i + 1;
				second[count++] = j;
			}
			//有更小的区间出现，重新赋值区间
			else if (second[count - 1] - first[count - 1] > j - i - 1) {
				count = 0;
				first[count] = i + 1;
				second[count++] = j;
			}
			//进行下一步的搜索，i向前移动，并在已经出现的map中减去
			if (appear[v[i]] == 1)
				appear.erase(v[i]);
			else
				appear[v[i]] --;
			i++;
		}
		//没有找齐，继续插入数字
		else
			appear[v[j++]] ++;
	}

	printf("%d %d\n", second[0] - first[0] + 1, count);
	for (int i = 0; i < count; i++)
		printf("[%d,%d]%c", first[i], second[i], i == count - 1 ? '\n' : ' ');

	return 0;
}