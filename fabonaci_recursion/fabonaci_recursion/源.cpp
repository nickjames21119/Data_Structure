#include<iostream>
using namespace std;

int fabonaci(int date) {
	if (date < 0) {
		cout << "Input Error !!!";
		exit(1);
	}
	if (date <= 1)
		return date;
	return fabonaci(date - 1) + fabonaci(date - 2);
}

int main() {
	cout << "Please input the date : ";
	int date;
	cin >> date;
	cout << fabonaci(date);
	return 0;
}