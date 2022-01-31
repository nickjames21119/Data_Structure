#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

const int Maxnum = 100;
int cost[Maxnum] = { 0 };

inline int Minnum(int a, int b) { return a < b ? a : b; }
void InitCost() {
	int level;
	cout << "Please input the whole level of the stairs : ";
	cin >> level;
	for (int i = 1; i <= level; i++) {
		cin >> cost[i];
	}
}

int solution(int level) {
	int dp1 = cost[1];
	int dp2 = cost[2];
	if (level <= 2)
		return level;
	for (int i = 3; i <= level; i++) {
		int temp = Minnum(dp1, dp2) + cost[i];
		dp1 = dp2;
		dp2 = temp;
	}
	return Minnum(dp1, dp2);
}

int main() {
	int level;
	cout << "Please input the level you want to get : ";
	cin >> level;
	cout << solution(level);
	return 0;
}

