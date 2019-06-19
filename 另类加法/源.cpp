class UnusualAdd {
public:
	int addAB(int A, int B) {
		// write code here
		int sum = 0;
		int jw = 0;
		if (B == 0)return A;
		while (B != 0)
		{
			sum = A ^ B;
			jw = A & B;

			A = sum;
			B = jw << 1;

		}
		return sum;
	}
};