class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		stack<int> tmp;
		for (int i = 0, j = 0; i < pushV.size(); ++i)
		{
			tmp.push(pushV[i]);
			while (j < popV.size() && popV[j] == tmp.top())
			{
				tmp.pop();
				++j;
			}
		}
		return tmp.empty();
	}
};