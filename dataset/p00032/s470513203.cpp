#include<cstdio>

int main(void) {
	int a, b, c;
	int x, y;

	x = 0;
	y = 0;
	while(scanf("%d,%d,%d", &a, &b, &c) != EOF) {
		if(c*c == a*a+b*b) {
			x++;
		} else if(a == b) {
			y++;
		}
	}
	printf("%d\n%d\n", x, y);

	return 0;
}