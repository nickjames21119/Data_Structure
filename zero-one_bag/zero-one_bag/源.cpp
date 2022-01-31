#include<iostream>
#include<vector>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void bag_solve() {

    //weight，物品重量；value，物品价值
	//物品重量与其价值标号对应
	vector<int> weight = { 1, 3, 4 };      
	vector<int> value = { 15, 20, 30 };

	//背包容量
	int bagweight = 4;

	//列  为背包容量；行  为物品标号
	vector<vector<int>> dp(weight.size() + 1, vector<int>(bagweight + 1, 0));

	for (int j = bagweight; j >= weight[0]; j--)
		dp[0][j] = dp[0][j - weight[0]] + value[0];

	//物品优先遍历
	for (int i = 1; i < weight.size(); i++) {
		for (int j = 0; j <= bagweight; j++) {
			if (j < weight[i])
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] = dp[i - 1][j - weight[i]] + value[i];
		}
	}
	cout << dp[weight.size() - 1][bagweight] << endl;
}

int main() {
	bag_solve();
	return 0;
}