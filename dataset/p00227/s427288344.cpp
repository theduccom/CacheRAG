#include <stdio.h>
#include <algorithm>
#pragma warning(disable : 4996)
using namespace std;
int n, m, p[1000];
int main() {
	while (true) {
		scanf("%d%d", &n, &m);
		if (n == 0 && m == 0) break;
		for (int i = 0; i < n; i++) scanf("%d", &p[i]);
		sort(p, p + n);
		int ret = 0;
		for (int i = 0; i < n; i++) ret += p[i];
		for (int i = n % m; i + m <= n; i += m) ret -= p[i];
		printf("%d\n", ret);
	}
	return 0;
}