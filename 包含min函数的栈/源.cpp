class Solution {
public:
	void push(int value) {
		data.push(value);
		if (min_data.empty() || value <= min_data.top())
			min_data.push(value);
	}
	void pop() {
		if (data.top() == min_data.top())
			min_data.pop();
		data.pop();
	}
	int top() {
		return data.top();
	}
	int min() {
		return min_data.top();
	}
private:
	stack<int> data;
	stack<int> min_data;
};