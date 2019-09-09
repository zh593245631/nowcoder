class Solution {
public:
	void reOrderArray(vector<int>& array) {
		int k = 0;
		for (int i = 0; i < array.size(); ++i)
		{
			if (array[i] % 2)
			{
				int j = i;
				while (j > k)
				{
					swap(array[j - 1], array[j]);
					--j;
				}
				++k;
			}
		}
	}
};