#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <memory.h>
#include <cassert>

using namespace std;


#define all(c) ((c).begin()), ((c).end())
#define debug(c) cerr << "> " << #c << " = " << (c) << endl;
#define iter(c) __typeof((c).begin())
#define present(c, e) ((c).find((e)) != (c).end())
#define cpresent(c, e) (find(all(c), (e)) != (c).end())
#define tr(i, c) for (iter(c) i = (c).begin(); i != (c).end(); i++)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)

#define mp make_pair
#define fst first
#define snd second
#define pb push_back


const double EPS = 1e-10;


typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef complex<double> P;
class union_find {
public:
	vector<int> dat;
	union_find(int n) {
		dat.assign(n, -1);
	}
	
	bool unite(int a, int b) {
		int da = find(a);
		int db = find(b);
		if (da != db){
			if (dat[da] > dat[db]) swap(da, db);
			dat[da] += dat[db];
			dat[db] = da;
		}
		return (da != db);
	}
	bool check(int a, int b) {
		return (find(a) == find(b));
	}
	int find(int a) {
		return ((dat[a] < 0) ? a : (dat[a] = find(dat[a])));
	}
	int size(int a) {
		return -dat[find(a)];
	}
};

int main() {
	for (string s; cin >> s; ) {
		vector<string> m;
		m.pb(s);
		rep(i, 11) {
			cin >> s;
			m.pb(s);
		}
		union_find uf(12 * 12);
		rep (i, 12) rep (j, 12) if (m[i][j] == '1') {
			if (i > 0) if (m[i - 1][j] == '1') uf.unite(i * 12 + j, (i - 1) * 12 + j);
			if (j > 0) if (m[i][j - 1] == '1') uf.unite(i * 12 + j, i * 12 + j - 1);
		}
		set<int> ans;
		rep (i, 12) rep (j, 12) if (m[i][j] == '1') ans.insert(uf.find(i * 12 + j));
		cout << ans.size() << endl;
	}
	return 0;
}