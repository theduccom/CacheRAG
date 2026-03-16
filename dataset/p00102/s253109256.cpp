#include<iostream>
#include<iomanip>
#include<algorithm>
#include<array>
#include<bitset>
#include<cassert>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<numeric>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<unordered_map>
#include<queue>
#include<vector>
using namespace std;

//#define int long long
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()
#define dump(o) {cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) {cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL
const int MOD = 1e9 + 7;

signed main() {
	int A[15][15] = {};
	for (int n; cin >> n&&n;) {
		memset(A, 0, sizeof(A));
		rep(i, 0, n) {
			rep(j, 0, n) {
				cin >> A[i][j];
				A[i][n] += A[i][j];
				A[n][j] += A[i][j];
				A[n][n] += A[i][j];
			}
		}
		rep(i, 0, n + 1) {
			rep(j, 0, n + 1) {
				cout << setfill(' ') << setw(5) << A[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}