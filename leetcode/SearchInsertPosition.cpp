#include <iostream>
#include <vector>
using namespace std;
int search(vector<int>& nums, int target) {
	int low = 0, high = nums.size() - 1, mid,i;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
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
	if (low == 0)
	{
        return 0;
	}
    return mid + 1;
}

void main()
{
	vector<int>obj(6);
	int const num[6] = { 1, 3, 5, 6 };
	int const target = 0;
	for (int i = 0; i <= 3; i++)
	{
		obj[i] = num[i];
	}
	int a = search(obj, target);
	cout << a << endl;
}