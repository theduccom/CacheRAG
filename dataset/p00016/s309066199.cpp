#include <cmath>
#include <cstdio>
double x, y, a; int s, t;
int main() {
	while(~scanf("%d,%d", &s, &t)) {
		x += s * cos(a);
		y += s * sin(a);
		a += t / 180.0 * 3.14159265358979;
	}
	printf("%d\n%d\n", (int)y, (int)x);
	return 0;
}