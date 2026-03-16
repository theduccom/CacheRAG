#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <complex>
#include <fstream>
using namespace std;
typedef long long ll;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
template<class T, class C> void chmax(T& a, C b){ if(a < b) a = b; }
template<class T, class C> void chmin(T& a, C b){ if(b < a) a = b; }
template<class T, class C> pair<T, C> mp(T a, C b){ return make_pair(a, b); }


const int lim = 80;

int main()
{
	int n;
	cin >> n;
	rep(i, n)
	{
		int ans[128];
		memset(ans, 0, sizeof(ans));
		string a, b;
		cin >> a >> b;

		int ai = a.size()-1, bi = b.size()-1;
		for(int i = 0; ai >= 0 || bi >= 0; ai--, bi--, i++)
		{
			int as = (ai >= 0 ? a[ai] - '0' : 0), bs = (bi >= 0 ? b[bi] - '0' : 0);

			ans[i] += as + bs;
			ans[i+1] += 9 < ans[i];
			if(9 < ans[i]) ans[i] -= 10;

			if(i == lim + 4) break;
		}


		if(ans[lim] != 0 ||(lim < a.size() || lim < b.size()))
		{
			cout << "overflow" << endl;
		}
		else
		{
			int index = 0;
			rep(i, lim)
				if(ans[i] != 0)
					index = i;

			for(int i = index; i >= 0; i--)
				cout << ans[i];

			cout << endl;
		}
	}
}