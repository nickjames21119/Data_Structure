#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
const int MaxNum = 10000;
using namespace std;


int num_min(vector<int> nums, int amount) {
	vector<int> dp(amount + 1, MaxNum);
	dp[0] = 0;
	for (int i = 0; i < nums.size(); i++)
		for (int j = nums[i]; j <= amount; j++)
			if (dp[j - nums[i]] != MaxNum)
				dp[j] = min(dp[j - nums[i]] + 1, dp[j]);

	if (dp[amount] == MaxNum)
		return -1;
	return dp[amount];
}


int main() {
	int number;
	cout << "Please input the number of coins : ";
	cin >> number;
	vector<int> coins;
	for (int i = 0; i < number; i++)
		cin >> coins[i];
	int amount;
	cout << "Please input the sum : ";
	cin >> amount;
	num_min(coins, amount);
	return 0;
}

