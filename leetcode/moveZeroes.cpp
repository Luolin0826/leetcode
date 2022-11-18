#include <iostream>
#include <vector>
using namespace std;
void moveZeroes(vector<int>& nums)
{
	const int n = nums.size();
	int count = 0;
	for (int i = 0; i < n - count; i++)
	{
		while ((i + count) < n && (nums[i + count] == 0))
		{
			count++;
		}
		if ((i + count) < n)
		{
			nums[i] = nums[i + count];
		}
	}
	for (int j = n - 1; count > 0; j--, count--)
	{
		nums[j] = 0;
	}
}

void main()
{
	vector<int> obj(1);
	int const num[7] = { 0 };
	for (int i = 0; i < 1; i++)
	{
		obj[i] = num[i];
	}
	moveZeroes(obj);
}