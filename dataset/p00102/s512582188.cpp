#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n != 0) {
		int a[10][10] = {}, sum_h[11] = {}, sum_v[11] = {};
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
				printf("%5d",a[i][j]);
				sum_h[i] += a[i][j];
				sum_v[j] += a[i][j];
			}
			sum_v[n] += sum_h[i];
			printf("%5d\n", sum_h[i]);
		}
		for (int i = 0; i < n; i++)
			printf("%5d", sum_v[i]);
		printf("%5d\n", sum_v[n]);
		cin >> n;
	}
	return 0;
}
