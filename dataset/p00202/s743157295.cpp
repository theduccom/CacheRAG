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
#include <fstream>
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
	vi prime(1000000+1, 1);
	prime[0] = prime[1] = 0;
	FOR(i, 2, 1000) {
		if(prime[i]) {
			for(int j = i*i; j <= 1000000; j += i) {
				prime[j] = 0;
			}
		}
	}

	int n, x;
	while(cin >> n >> x, n) {
		vi check(1000000+1);
		check[0] = 1;		
		int p;
		REP(i, n) {
			cin >> p;
			FOR(j, p, 1000000) {
				if(check[j-p]) {
					check[j] = 1;
				}
			}
		}

		int ans = -1;
		while(x) {
			if(prime[x]&check[x]) {
				ans = x;
				break;
			}
			x--;
		}

		if(ans == -1) {
			cout << "NA" << endl;
		} else {
			cout << ans << endl;
		}
	}
}