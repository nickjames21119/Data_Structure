#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

const int Maxnum = 100;
int cost[Maxnum] = { 0 };
int dp[Maxnum] = { 0 };
inline int Minnum(int a, int b) { return a < b ? a : b; }
void InitCost() {
	int number;
	cout << "Please input the length of the stairs : ";
	cin >> number;
	cout << "Please input the cost of each stair : ";
	for (int i = 1; i <= number; i++)
		cin >> cost[i];
}
void Cost_Min(const int level) {
	dp[1] = cost[1];
	dp[2] = cost[2];
	for (int i = 3; i <= level; i++) {
		dp[i] = Minnum(dp[i - 1], dp[i - 2]) + cost[i];
	}
}

int main() {
	int level;
	cout << "Please input the level you want to get : ";
	cin >> level;
	Cost_Min(level);
	cout << dp[level];
	return  0;
}