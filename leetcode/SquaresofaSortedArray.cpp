#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector<int> sortedSquares(vector<int>& nums)
{
	vector<int> temp(nums);
	int n = nums.size(), high = n - 1, low = 0, count = high;
	while (low <=high)
	{
		if (abs(temp[low]) <= abs(temp[high]))
		{
			nums[count--] = pow(abs(temp[high]), 2);
			high--;
		}
		else
		{
			nums[count--] = pow(abs(temp[low]), 2);
			low++;
		}
	}
	return nums;
}

void main()
{
	vector<int> obj(6);
	int const num[6] = { 1, 3, 5, 6 };
	for (int i = 0; i <= 3; i++)
	{
		obj[i] = num[i];
	}
	vector<int> result = sortedSquares(obj);
}