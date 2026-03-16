#include <iostream>
using namespace std;

#define prime 50021
#define Sprime 223

int main() {
	int sn, bn, n;
	bool not_prime[prime + 1];
	for (int i = 2; i <= Sprime; i++) {
		if (!not_prime[i]) {
			for (int j = i + i; j <= prime; j += i) {
				not_prime[j] = true;
			}
		}
	}
	while (cin >> n) {
		sn = bn = n;
		while (not_prime[--sn]);
		while (not_prime[++bn]);
		cout << sn << " " << bn << endl;
	}
}
