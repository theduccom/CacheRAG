#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define EPS (1e-8)

int main() {
	int a, b, c, n;
	while (cin >> a >> b >> c, a || b || c) {
		cin >> n;
		int min1 = min(a, b), min2 = min(max(a, b), c);
		double d = hypot(min1, min2) / 2.0;
		
		REP(i, n) {
			double r;
			scanf("%lf", &r);
			if (r - d > EPS) puts("OK");
			else puts("NA");
		}
	}
	return 0;
}