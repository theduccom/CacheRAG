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
	vi v(100100, 1);
	v[0] = 0;
	v[1] = 1;
	for (int i = 2; i < 100100; i++) {
		if (v[i] == 1) {
			for (int j = 2; j <= 100100 / i; j++) {
				v[i*j] = 0;
			}
		}
	}
	int n;
	while (cin >> n&&n > 0) {
		int ans = 5;
		for (int i = n; i > 1; i--) {
			if (v[i] && v[i - 2]) {
				ans = i;
				break;
			}
		}
		cout << ans - 2 << " " << ans << endl;
	}
}