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
	int N;
	scanf("%d", &N);
	rep(i, N) {
		double ax, ay, ar, bx ,by, br;
		scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &ar, &bx, &by, &br);
		double AB = sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay));
		double ABdis = ar + br;
		if(AB > ABdis) printf("0\n");
		else if(AB + ar < br) printf("-2\n");
		else if(AB + br < ar) printf("2\n");
		else printf("1\n");
	}
	return 0;
}