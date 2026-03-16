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


int main() {
	int N = 60000;
	vi p(N, 1);
	p[0] = p[1] = 0;
	rep (i, N) if (p[i]) for(int j = i + i; j < N; j += i) p[j] = 0;
	for (int n; cin >> n; ) {
		for(int i = n - 1; ; i--) if (p[i]) {
			cout << i << ' ';
			break;
		}
		for(int i = n + 1; ; i++) if (p[i]) {
			cout << i << endl;
			break;
		}
	}
	
	return 0;
}