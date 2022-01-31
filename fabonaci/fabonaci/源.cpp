#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main() {
	int array[1000];
	array[0] = 0;
	array[1] = 1;
	cout << "Please input the date : ";
	int number;
	cin >> number;
	for (int i = 2; i <= number; i++)
		array[number] = array[number - 1] + array[number - 2];
	cout << array[number];
	return 0;
}