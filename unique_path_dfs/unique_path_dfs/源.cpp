#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int solution(int i, int j, int m, int n) {
	if (i > m || j > n) return 0;
	else if (i == m && j == n) return 1;
	else return solution(i + 1, j, m, n) + solution(i, j + 1, m, n);
}

int main() {
	int m, n;
	cout << "Please input the size of the area : ";
	cin >> m >> n;
	int px, py;
	cout << "Please input the start point : ";
	cin >> px >> py;
	cout << solution(px, py, m, n);
	return 0;
}