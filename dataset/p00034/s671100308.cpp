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

int main() {
	int l[11];
	char c;
	for(; cin >> l[1] >> c; ) {
		rep(i, 9) cin >> l[i + 2] >> c;
		l[0] = 0;
		int v1, v2; cin >> v1 >> c >> v2;
		rep(i, 10) l[i + 1] += l[i];
		double x = l[10] / (double)(v1 + v2) * v1;
		rep(i, 10) if(l[i] <= x && x <= l[i + 1]) {
			cout << i + 1 << endl;
			break;
		}
	}
	return 0;
}