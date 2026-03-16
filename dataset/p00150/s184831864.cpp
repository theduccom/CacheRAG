#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int prime[10001] = { false };
	for (int i = 2; i <= sqrt(10000); i++) {
		if(!prime[i])
			for (int j = 2; i*j <= 10000; j++) {
				prime[i*j] = true;
			}
	}
	int n;
	while (cin >> n&&n) {
		int p1=0, p2=0;
		for (int i = n;i>=0;i--) {
			if (!prime[i]) {
				p2=p1;
				p1 = i;
			}
			if (p2 - p1 == 2)break;
		}
		cout << p1 << " " << p2 << endl;
	}
}
