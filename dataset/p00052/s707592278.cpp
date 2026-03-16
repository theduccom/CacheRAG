#include <stdio.h>
int n;
int main() {
	while(scanf("%d", &n), n) {
		int ret = 0;
		while(n) n /= 5, ret += n;
		printf("%d\n", ret);
	}
}