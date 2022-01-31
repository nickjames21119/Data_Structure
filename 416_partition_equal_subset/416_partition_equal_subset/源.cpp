#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
using namespace std;

bool CanPartition(vector<int> nums) {
	int sum = 0;

	vector<int> dp(10001, 1);

	for (int i = 0; i < nums.size(); i++)
		sum += nums[i];

	if (sum % 2 == 1)
		return false;

	int target = sum / 2;
	for (int i = 0; i < nums.size(); i++)
		for (int j = target; j >= nums[i]; j--)
			dp[j] = max(dp[j], dp[j - nums[i]] + nums[i]);


	if (dp[target] == target)
		return true;
	return false;
}

int main() {
	vector<int> nums;
	int number;
	cin >> number;
	for (int i = 0; i < number; i++)
		cin >> nums[i];
	CanPartition(nums);
	return 0;
}