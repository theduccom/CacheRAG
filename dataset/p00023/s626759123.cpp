#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <functional>
#include <string>
#include <algorithm>
#include <climits>
#include <utility>

#define PRINT(STR) cout << STR << endl;
#define REP(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)
#define REG(i, a, b) for (int (i) = ((int)(a)); (i) < ((int)(b)); i++)
#define ALL(V) (V).begin(), (V).end()

typedef long long ll;

using namespace std;

int nextInt() { int n = -1; cin >> n; return n; }
double nextDouble() { double d = -1; cin >> d; return d; }
ll nextll() { ll n = -1; cin >> n; return n; }
string nextString() { string str; cin >> str; return str; }

int INF = 1LL << 25;
double EPS = 1e-9;

// BEGIN //////////////////////////////////////////////////////////////

int main() {
	int N = nextInt();
	double xa, ya, ra, xb, yb, rb;
	REP(i, N) {
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		double distance = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
		if (distance < ra - rb) {
			PRINT(2);
		} else {
			if (distance < rb - ra) {
				PRINT(-2);
			} else {
				if (distance <= ra + rb) {
					PRINT(1);
				} else {
					PRINT(0);
				}
			}
		}
	}
	return 0;
}

// END   //////////////////////////////////////////////////////////////