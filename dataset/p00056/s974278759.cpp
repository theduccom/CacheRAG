#include <cstdio>
#define REP(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(i, n) REP(i, 0, n)
bool p[50001];
int main()
{
	rep(i, 50001) p[i] = true;
	for (int i = 2; i * i <= 50000; ++i) {
		if (p[i]) for (int j = 2 * i; j <= 50000; j += i)
			if (p[j]) p[j] = false;
	}
	p[0] = p[1] = false;

	int n;
	while (scanf("%d", &n), n) {
		int c = 0;
		REP(i, 2, n/2+1) if (p[i] && p[n-i]) c++;
		printf("%d\n", c);
	}
	return 0;
}