/*
这道题⽬还可以继续深化，就是⼀步⼀个台阶，两个台阶，三个台阶，直到 m个台阶，有多少种⽅法爬
到n阶楼顶。
这⼜有难度了，这其实是⼀个完全背包问题，但⼒扣上没有这种题⽬，所以后续我在讲解背包问题的时
候，今天这道题还会拿从背包问题的⻆度上来再讲⼀遍。
*/

#include<iostream>
using namespace std;

int solution(const int stairs, const int paws) {
	int counter[100] = { 0 };
	counter[0] = 1;
	for (int i = 1; i < stairs; i++) {
		for (int j = 1; j <= paws; j++) {
			if (i - j >= 0) {
				counter[i] += counter[i - j];
			}
		}
	}
	return counter[stairs - 1];
}

int main() {
	cout << "Please input the stairs and the paws : ";
	int stairs, paws;
	cin >> stairs >> paws;
	cout << solution(stairs, paws);
	return 0;
}
