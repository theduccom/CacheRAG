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
	double v1, v2;
	double l[10];
	while(scanf("%lf,", &l[0]) != EOF) {
		int adis = 0, sum = l[0];
		FOR(i, 1, 10) {
			scanf("%lf,", &l[i]);
			sum += l[i];
		}
		scanf("%lf,%lf", &v1, &v2);
		rep(i, 10) {
			adis += l[i];
			double time = adis / v1;
			double bdis = v2 * time;
			if(sum <= adis + bdis) {
				printf("%d\n", i + 1);
				break;
			}
		} 
	}
	return 0;
}