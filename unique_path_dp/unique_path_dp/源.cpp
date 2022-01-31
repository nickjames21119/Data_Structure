#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
const int Maxnum = 100;
int dp[Maxnum][Maxnum];

void Initdp() {
	for (int i = 0; i < Maxnum; i++)
		dp[i][0] = 1;
	for (int i = 0; i < Maxnum; i++)
		dp[0][i] = 1;
}

int solution(int px, int py) {
	for (int i = 1; i <= px; i++) {
		for (int j = 0; j <= py; j++) {
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}
	return dp[px][py];
}

int main() {
	int px, py;
	cout << "Please input the target : ";
	cin >> px >> py;
	cout << solution(px, py);
	return 0;
}
