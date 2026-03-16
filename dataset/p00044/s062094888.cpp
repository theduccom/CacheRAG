#include <cstdio>
#define N 50022
#define REP(i, a, b) for (int i = a; i < b; ++i)
bool p[N+1];
int main()
{
	REP(i, 0, N+1) p[i] = true;
	for (int i = 2; i * i <= N; ++i)
		if (p[i]) for (int j = 2 * i; j <= N; j += i)
			if (p[j]) p[j] = false;
	int n;
	while (scanf("%d", &n) == 1) {
		for (int i = n-1; i >= 2; --i) if (p[i]) { printf("%d ", i); break; }
		for (int i = n+1; i <= N; ++i) if (p[i]) { printf("%d\n", i); break; }
	}
	return 0;
}