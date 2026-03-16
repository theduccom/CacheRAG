#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int n;
	int *k;

	while (1) {
		cin >> n;
		if (n == 0) {
			break;
		}
		int p = 0;
		int r = 0;
		int q = 0;
		k = (int *)malloc(sizeof(int) * 110000);
		if (k == NULL) {
			exit(0);
		}
		k[0] = 1;
		for (int i = 1; i < 110000; i++) {
			k[i] = 0;
		}
		for (int i = 1; i * i < 110000; i++) {
			if (k[i] == 0) {
				for (int j = 2; j <= 110000/(i+1); j++) {
					k[(i+1)*j-1] = 1;
				}
			}
		}
		while (r < n) {
			if (k[q] == 0) {
				p += (q+1);
				r++;
			}
			q++;
		}
		cout << p << endl;
	}

	return 0;
}