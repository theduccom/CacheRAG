#include <cstdio>
using namespace std;

int main() {
	int k[12], v1, v2, x;
	double h, d;

	while (scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &k[1], &k[2], &k[3],
			&k[4], &k[5], &k[6], &k[7], &k[8], &k[9], &k[10], &v1, &v2) != EOF) {
		x = 0;
		for (int i = 1; i <= 10; i++) {
			x += k[i];
		}
		h = (double) x / (v1 + v2);
		d = (double) v1 * h;
		x = 0;
		for (int i = 1; i <= 10; i++) {
			x += k[i];
			if (d <= x) {
				printf("%d\n", i);
				break;
			}
		}
	}
}