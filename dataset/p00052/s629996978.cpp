#include<stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n), n) {
		int b = 0, r = 1, c = 0;
		while (n) {
			c += (n%5) * b;
			n /= 5;
			b += r;
			r *= 5;
		}
		printf("%d\n", c);
	}
	return 0;
}