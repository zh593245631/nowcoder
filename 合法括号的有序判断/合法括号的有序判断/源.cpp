class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		// write code here
		stack<char> st;
		for (int i = 0; i < A.size(); ++i)
		{
			if (A[i] == '(') {
				st.push('(');
			}
			else if (!st.empty() && A[i] == ')') {
				st.pop();
			}
			else {
				return false;
			}
		}
		if (st.empty())
			return true;
		return false;
	}
};