#include <iostream>
#include <vector>
using namespace std;
int search(vector<int>& nums, int target) {
	int low = 0, high = nums.size() - 1, mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (nums[mid] == target)
		{
			return mid;
		}
		else if (nums[mid] > target)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return -1;
}

void main()
{
	vector<int>obj(6);
	int const num[6] = { -1, 0, 3, 5, 9, 12 };
	int const target = 9;
	for (int i = 0; i <= 5; i++)
	{
		obj[i] = num[i];
	}
	int a = search(obj, target);
	cout << a << endl;
}