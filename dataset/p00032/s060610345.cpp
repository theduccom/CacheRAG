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

int num[5000];

int main() {
	int a, b, c;
	int rec = 0, rho = 0;
	while(scanf("%d,%d,%d", &a, &b, &c) != EOF) {
		if(c * c == a * a + b * b) rec++;
		if(a == b) rho++;
	}
	printf("%d\n%d\n",rec, rho);
	return 0;
}