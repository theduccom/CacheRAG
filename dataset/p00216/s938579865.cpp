#include <cstdio>

int main(void) {
	while(true) {
		int n;
		scanf("%d", &n);
		if(n == -1)
			break;

		int ans = 1150;
		if(10 < n && n <= 20)
			ans += 125 * (n - 10);
		if(20 < n && n <= 30)
			ans += 125 * 10 + 140 * (n - 20);
		if(30 < n)
			ans += 125 * 10 + 140 * 10 + 160 * (n - 30);

		printf("%d\n", 4280 - ans);
	}
	return 0;
}