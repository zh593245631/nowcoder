/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
		if (!head) return {};
		stack<int> tmp;
		while (head)
		{
			tmp.push(head->val);
			head = head->next;
		}
		vector<int> ans;
		while (!tmp.empty())
		{
			ans.push_back(tmp.top());
			tmp.pop();
		}

		return ans;
	}
};