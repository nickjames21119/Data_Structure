#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
const int MaxNum = 100000;
using namespace std;

int findMin(int number) {
	vector<int> dp(number + 1, MaxNum);
	dp[0] = 0;
	for (int i = 0; i < number; i++)
		for (int j = 1; j * j <= i; j++)
			dp[i] = min(dp[i - j * j] + 1, dp[i]);

	return dp[number];
}

int main() {
	int number;
	cout << "Please input the number : ";
	cin >> number;
	findMin(number);
	return 0;
}