#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

const int Maxnum = 100;
int dp[Maxnum] = { 0 };
int solution(int px, int py) {
	for (int i = 0; i <= px; i++)
		dp[i] = 1;
	for (int j = 0; j <= px; j++) {
		for (int i = 0; i <= py; i++) {
			dp[i] = dp[i - 1];
		}
	}
	return dp[py];
}

int main() {
	int x, y;
	cout << "Please input the target : ";
	cin >> x >> y;
	cout << solution(x, y);
	return 0;
}