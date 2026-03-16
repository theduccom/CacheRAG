#include <iostream>
#include <iomanip>
#include <cassert>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <cstring>
#include <stack>
#include <queue>
#include <map>
#include <bitset>
#include <sstream>
#include <istream>
#include <cmath>
#include <cstdio>

using namespace std;

#define vci vector<int>
#define vcs vector<string>
#define pb push_back
#define sz size()
#define mapii map<int, int>
#define mapci map<char, int>
#define mapsi map<string, int>
#define all(x) x.begin(), x.end()
#define minit(a, i) memset(a, i, sizeof(a));

#define for_(i, a, b) for (int i=(int)a; i<(int)b; i++)
#define for_d(i, a, b) for (int i=(int)a-1; i>=b; i--)
#define for_r(i, a, b, c) for (int i=(int)a; i<(int)b; i += c)
#define for_dr(i, a, b, c) for (int i=(int)a-1; i>=b; i -= c)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)

typedef long long ll;
typedef double D;

const int iINF = 2147483647;
const ll lINF = 9223372036854775807;

template <class T> inline void dbg(T t) { cout << t << endl; }

D EPS = 1e-6;

int main() {
	int X, H;
	
	while (1) {
		cin >> X >> H; if (X==0 && H==0) break;
		
		D x = (D)X, h = (D)H;
		D y = sqrt((x/2.0)*(x/2.0) + h*h);
		D ans = (y*x/2.0)*4.0 + x*x;
		
		ans -= EPS;
		printf("%lf\n", ans);
	}
	
	return 0;
}