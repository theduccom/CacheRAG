#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,s,e) for(int i=(s); i<(e); i++)
#define pb(n) push_back((n))
#define mp(n,m) make_pair((n),(m))
#define all(r) r.begin(),r.end()
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;







int main() {
	int n;
	while (cin >> n&&n > 0) {
		vector<vi> v(n + 1, vi(n + 1, 0));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> v[i][j];
				v[i][n] += v[i][j];
				v[n][j] += v[i][j];
			}
			v[n][n] += v[i][n];
		}
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= n; j++) {
				printf("%5d", v[i][j]);
			}
			cout << endl;
		}
	}
}