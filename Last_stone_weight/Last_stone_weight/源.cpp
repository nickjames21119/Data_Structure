//¿‡±»416
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
using namespace std;

int solve(vector<int> stones) {
	vector<int> dp(15001, 0);
	int sum = 0;
	for (int i = 0; i < stones.size(); i++)
		sum += stones[i];
	int target = sum / 2;
	for (int i = 0; i < stones.size(); i++)
		for (int j = target; j >= stones[i]; j--)
			dp[j] = max(dp[j], dp[j - stones[i]] + stones[i]);

	return sum - 2 * dp[target];
}

int main() {
	vector<int> stones;
	int size;
	cin >> size;
	for (int i = 0; i < size; i++)
		cin >> stones[i];
	solve(stones);
	return 0;
}