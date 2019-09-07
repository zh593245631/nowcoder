//class Solution {
//public:
//	int minNumberInRotateArray(vector<int> rotateArray) {
//		if (rotateArray.size() == 0)return 0;
//		int min = rotateArray[0];
//		for (int i = 1; i < rotateArray.size(); ++i)
//		{
//			if (rotateArray[i - 1] > rotateArray[i])
//			{
//				min = rotateArray[i];
//				break;
//			}
//		}
//		return min;
//	}
//};
class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		if (rotateArray.size() == 0)return 0;
		int left = 0;
		int right = rotateArray.size() - 1;
		while (left + 1 != right)
		{
			int mid = (left - right) / 2 + right;
			if (rotateArray[mid] >= rotateArray[0])
			{
				left = mid;
			}
			else
			{
				right = mid;
			}
		}
		return rotateArray[right];
	}
};