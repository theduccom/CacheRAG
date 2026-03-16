#include <cmath>
#include <cstdio>
#define eps 1e-8
int n; long double xa, ya, ra, xb, yb, rb;
int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%Lf%Lf%Lf%Lf%Lf%Lf", &xa, &ya, &ra, &xb, &yb, &rb);
		long double dist = sqrtl((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
		if(dist >= ra + rb + eps) {
			printf("0\n");
		}
		else if(dist <= ra - rb - eps) {
			printf("2\n");
		}
		else if(dist <= rb - ra - eps) {
			printf("-2\n");
		}
		else  {
			printf("1\n");
		}
	}
	return 0;
}