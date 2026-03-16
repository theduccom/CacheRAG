#define _CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define FOR(i, m, n) for(int i=(m); i<(n); ++i)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define Cout(x) cout << (x) << endl
#define Cout2(x, y) cout << (x) << " " << (y) << endl
#define dump(x) cout << #x << " = " << (x) << endl;
#define forauto(i, a) for(auto i : a)cout << i << " "; puts("");
typedef long long LL;
typedef vector<int> VI;
typedef vector<LL> VL;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef vector<vector<int>> VVI;
typedef pair<int, int> PII;
const int inf = 1e9;
const double pi = acos(-1.0);

int main() {

	while (true) {
		VI c(3); rep(i, 3)cin >> c[i];
		if (c[0] == 0 && c[1] == 0 && c[2] == 0)break;

		sort(all(c));
		double max = hypot((double)c[0] / 2., (double)c[1] / 2.);
		
		int n; cin >> n;
		rep(i, n) {
			double r; cin >> r;
			puts(r > max ? "OK" : "NA");
		}
	}
}
