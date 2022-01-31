#include<iostream>
using namespace std;

int main() {
	int before = 0;
	int after = 1;
	cout << "Please input the date : ";
	int date;
	cin >> date;
	for (int i = 2; i <= date; i++) {
		int temp = before;
		before = after;
		after = temp + before;
	}
	cout << after;
	return 0;
}