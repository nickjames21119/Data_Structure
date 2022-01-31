#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
using namespace std;

void solve() {
	vector<int> weight = { 1, 3, 4 };
	vector<int> value = { 10, 15, 20 };
	int bagweight = 4;

	vector<int> dp(bagweight + 1, 0);
	for (int i = 0; i < weight.size(); i++)
		for (int j = bagweight; j >= weight[i]; j--)
			dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);

	cout << dp[bagweight] << endl;
}

int main() {
	solve();
	return 0; 
}