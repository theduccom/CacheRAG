#include<iostream>
using namespace std;

int main() {
	int count, n;
	while (cin >> n && n) {
		count = 0;
		while (n > 0) {
			count += n / 5;
			n /= 5;
		}
		cout << count << endl;
	}
}
