/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		ListNode* cur = pListHead;
		while (k > 0 && cur != nullptr)
		{
			cur = cur->next;
			--k;
		}
		if (k != 0)return nullptr;

		ListNode* ans = pListHead;
		while (cur)
		{
			cur = cur->next;
			ans = ans->next;
		}
		return ans;
	}
};