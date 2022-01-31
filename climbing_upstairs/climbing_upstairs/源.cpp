#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
using namespace std;

int upstairs(int n, int m) {
	vector<int> dp(n + 1, 0);
	dp[0] = 1;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (i - j >= 0)
				dp[i] += dp[i - j];

	return dp[n];
}

int main() {
	int number;
	int step;
	cout << "Please input the number of stairs & step_once : ";
	cin >> number >> step;
	cout << upstairs(number, step);
	return 0;
}