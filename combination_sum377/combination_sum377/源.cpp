#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
using namespace std;

int combination(vector<int> nums, int target) {
	vector<int> dp(target + 1, 0);
	dp[0] = 1;
	for (int i = 0; i < target; i++)
		for (int j = 0; j <= nums.size(); j++)
			if (i - nums[i] >= 0)
				dp[i] += dp[i - nums[j]];
	return dp[target];
}

int main() {
	vector<int> nums;
	int target;
	cout << "Please input the target : ";
	cin >> target;
	cout << "Please input the amount : ";
	int amount;
	cin >> amount;
	for (int i = 0; i < amount; i++)
		cin >> nums[i];
	cout << combination(nums, target);
	return 0;
}