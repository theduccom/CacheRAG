#include <iostream>
using namespace std;

int calc(int n) {
	int sum = 1150;
	if (10 < n) sum += (n - 10) * 125;
	if (20 < n) sum += (n - 20) * 15;
	if (30 < n) sum += (n - 30) * 20;
	return sum;
}

int main() {
	int data;
	while (1) {
		cin >> data; if (data == -1) break;
		cout << 4280 - calc(data) << endl;
	}
	return 0;
}
