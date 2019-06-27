class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		// write code here
		int ret = n / 2 + 1;
		map<int, int> m;
		for (const auto& e : gifts)
		{
			++m[e];
			if (m[e] == ret)return e;
		}
		return 0;
	}
};