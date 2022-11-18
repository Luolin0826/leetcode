#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int>& nums, int k)
{
	vector<int> temp(k,0);
	int n = nums.size(),count = 0;
	while (k>=n)
	{
		k %= n;
	}
	for (int i = n-k;i<n;i++)
	{
		temp[count++] = nums[i];
	}
	for (int j=n-k-1;j>=0;j--)
	{
		nums[j + k] = nums[j];
	}
	for (int q=k-1;q>=0;q--)
	{
		nums[q] = temp[q];
	}
}

void main()
{
	vector<int> obj(7);
	int const num[7] = { 1,2,3, 4, 5, 6,7};
	for (int i = 0; i <= 6; i++)
	{
		obj[i] = num[i];
	}
	rotate(obj,3);
}