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
#include <climits>

using namespace std;

inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str();}

typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;

#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,n-1)

const double EPS = 1e-10;
const double PI = acos(-1.0);

int main() {
	int n;
	
	while(cin >> n, n) {
		vvi field(n+1, vi(n+1, 0));

		REP(i, n) {
			REP(j, n) {
				cin >> field[i][j];		
			}
		}

		REP(i, n) {
			REP(j, n) {
				field[i][n] += field[i][j];
				field[n][j] += field[i][j];
				field[n][n] += field[i][j];
				printf("%5d", field[i][j]);
			}
			printf("%5d\n", field[i][n]);
		}

		REP(i, n+1) {
			printf("%5d", field[n][i]);
		}

		printf("\n");
	}

	
	return 0;
}