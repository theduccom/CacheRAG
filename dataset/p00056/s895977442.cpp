#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
using namespace std;
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string toStr(T x) { ostringstream sout; sout << x; return sout.str();}
typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,(n)-1)
const double EPS = 1e-12;
const double PI = acos(-1.0);
const int INF = INT_MAX/10;

int main() {
	vi prime(50000+1, 1);
	prime[0] = prime[1] = 0;
	FOR(i, 2, sqrt(50000)+1) {
		if(prime[i]) {
			for(int j = i*2; j <= 50000; j += i) {
				prime[j] = 0;
			}
		}
	}

	int n;
	while(cin >> n, n) {
		int m = n/2;
		int ans = 0;
		FOR(i, 2, m) {
			if(prime[i] && prime[n-i]) {
				ans++;
			}
		}
		cout << ans << endl;
	}

	return 0;
}