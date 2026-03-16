#include<iostream>
#include<math.h>
using namespace std;

int main() {
	bool prime[55001] = { false };
	for (int i = 2; i <= sqrt(55000); i++) {
		if (!prime[i]) {
			for (int j = 2; i*j <= 55000; j++) {
				prime[i*j] = true;
			}
		}
	}
	int n;
	while (cin >> n) {
		for (int i = n-1;; i--) {
			if (!prime[i]) {
				cout << i << " ";
				break;
			}
		}
		for (int i = n+1;; i++) {
			if (!prime[i]) {
				cout << i << endl;
				break;
				}
			}
		}
}
