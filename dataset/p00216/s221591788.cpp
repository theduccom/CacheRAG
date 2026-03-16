#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int num, sum;

	while (cin >> num, num != -1) {
		sum = 1150;
		sum += max(0, min(10, num - 10) * 125);
		sum += max(0, min(10, num - 20) * 140);
		sum += max(0, max(0, num - 30)  * 160);
		cout << 4280 - sum << endl;
	}

	return 0;
}
