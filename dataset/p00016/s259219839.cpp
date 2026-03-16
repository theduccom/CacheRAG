#include <bits/stdc++.h>

using namespace std;

#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)
#define MOD 1e9 + 7

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;

int main() {
	int walk, angle;
	double x = 0, y = 0;
	double rad = 90 * (M_PI / 180.0);
	double theta = 90;
	while(scanf("%d,%d", &walk, &angle), walk || angle) {
		y += walk * sin(rad);
		x += walk * cos(rad);
		theta = theta - angle;
		rad = theta * (M_PI / 180.0); 
	}
	printf("%d\n%d\n", (int)x, (int)y);
	return 0;
}