#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {

	string k;
	char a;

	while(cin >> k) {
		int mae = 0;
		int number;
		int sum = 0;
		int b;
		b = k.size();
		for (int i = 0; i < b; i++) {
			a = k[i];
			 if (a == 'I') {
				number = 1;
			} else if (a == 'V') {
				number = 5;
			} else if (a == 'X') {
				number = 10;
			} else if (a == 'L') {
				number = 50;
			} else if (a == 'C') {
				number = 100;
			} else if (a == 'D') {
				number = 500;
			} else if (a == 'M') {
				number = 1000;
			}

			if (number <= mae || sum == 0) {
				sum += number;
				mae = number;
			} else {
				sum = sum - (mae * 2) + number;
				mae = number;
			}
		}

		cout << sum << endl;
	}
	return 0;
}