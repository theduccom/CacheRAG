#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <iostream>
#include <cctype>
#include <sstream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <complex>
#include <fstream>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
template<class T> T RoundOff(T a){ return int(a+.5-(a<0)); }
template<class T, class C> void chmax(T& a, C b){ if(a < b) a = b; }
template<class T, class C> void chmin(T& a, C b){ if(b < a) a = b; }
template<class T, class C> pair<T, C> mp(T a, C b){ return make_pair(a, b); }

const int INF = 1 << 30;

int main()
{
    int w, n;
	int times = 0;
    while(cin >> w && w)
    {
		times++;
		cin >> n;

		vint now(w+1, 0), last(w+1, 0);

		rep(i, n)
		{
			int val, wei;
			char k;
			cin >> val >> k >> wei;

			rep(j, w+1)
				now[j] = (j < wei ? last[j] : max(last[j], last[j - wei] + val));

			last = now;
		}

		int rv = 0, rw = 0;
		rep(i, w + 1)
		{
			if(rv < last[i])
			{
				rv = last[i];
				rw = i;
			}
		}

		cout << "Case " << times << ":" << endl << rv << endl << rw << endl;
	}
}