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

#define PRIM 50021

bool prim[50022];
int a_prime[50022];

int main(){
	memset(prim, true, sizeof(prim));
	int N;
	prim[0] = false;
	FOR(i, 1, sqrt(PRIM)) {
		if(prim[i]) {
			for(int j = (i + 1); (i + 1) * j <= PRIM; ++j) {
				prim[(i + 1) * j - 1] = false;
			}
		}
	}
	while(cin >> N) {
		repr(i, N - 2) {
			if(prim[i]){
				printf("%d ", i + 1);
				break;
			}
		}
		FOR(i, N, PRIM) {
			if(prim[i]) {
				printf("%d\n", i + 1);
				break;
			}
		}
	}
	return 0;
}