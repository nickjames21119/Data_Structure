#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int solution(int m, int n) {
	long long int aera = m * n - 2;
	long long int m0 = m - 1;
	long long int n0 = aera;
	long long int counter = 1;
	long long int solve = 1;
	while (m0 >= 2 && n0 >= n0 - m0 + 1) {
		solve *= n0 / m0;
		n0--;
		m0--;
	}
	if (m0 != 2) {
		while (m0 != 2) {
			solve /= m0 - 1;
			m0--;
		}
	}
	else {
		while (n0 != aera - m + 2) {
			solve *= n0;
			n0--;
		}
	}
	int solve0 = int(solve);
	return solve0;
}

int main() {
	int x, y;
	cout << "Please input the target : ";
	cin >> x >> y;
	cout << solution(x, y);
	return 0;
}