#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
using namespace std;

int change(int amount, vector<int> coins) {
	vector<int> dp(amount + 1, 0);
	dp[0] = 1;
	//组合问题先遍历物品，避免重复计算
	for (int i = 0; i < coins.size(); i++)
		for (int j = coins[i]; j <= amount; j++)
			dp[j] += dp[j - coins[i]];
	return dp[amount];
}

int main() {
	int amount;
	cout << "Please input the aomunt of coins : ";
	cin >> amount;
	vector<int> coins;
	for (int i = 0; i < amount; i++)
		cin >> coins[i];
	change(amount, coins);
	return 0;
}