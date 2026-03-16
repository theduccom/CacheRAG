#include <cmath>
#include <cstdio>
int a, b; double x, y, r;
int main() {
	r = asin(1);
	while(scanf("%d,%d", &a, &b), a | b) {
		x += a * cos(r), y += a * sin(r);
		r -= b / 180.0 * acos(-1);
	}
	printf("%d\n%d\n", (int)(x), (int)(y));
}