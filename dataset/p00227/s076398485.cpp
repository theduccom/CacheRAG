#include <cstdio>
#include <algorithm>
#include <vector>
#include <numeric>
#include <functional>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back

int main() {
	while(1) {
		int n, m; scanf("%d %d", &n, &m);
		if(n == 0 && m == 0) break;
		vector<int> p;
		rep(i,n) {
			int t; scanf("%d", &t);
			p.pb(t);
		}
		sort(p.begin(), p.end(), greater<int>());
		int sum = 0;
		rep(i,n/m) {
			p[(i + 1) * m - 1] = 0;
		}
		printf("%d\n", accumulate(p.begin(), p.end(), 0));
	}
	return 0;
}