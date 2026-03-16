#include<iostream>
using namespace std;
int main() {
	int n;
	while (cin >>  n&&n != -1) {
		int sum = 0;
		sum += 1150;
		n -= 10;
		if (n>0) {
			if (n <= 10)
				sum += (n * 125);
			else
				sum += 1250;
			n -= 10;
		}
		if (n>0) {
			if (n <= 10)
				sum += (n * 140);
			else
				sum += 1400;
			n -= 10;
		}
		if (n > 0) {
			sum += (n * 160);
		}
		cout << 4280 - sum << endl;
	}
}