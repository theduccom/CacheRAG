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
#include <iterator>
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

int main()
{
    int W;
	for(int caseNum = 1; cin >> W && W; caseNum++)
	{
		int N;
		cin >> N;
		
		vint prv(W + 1, 0);
		
		
		rep(i, N)
		{
			vint nxt(prv);
			int val, wei;
			char k;
			
			cin >> val >> k >> wei;
			
			rep(j, W - wei + 1)
			{
				if(j == 0 || prv[j] != 0)
				{
					chmax(nxt[j + wei], prv[j] + val);
				}
			}
			
			prv = nxt;
		}
		
		
		int val = 0, wei;
		rep(i, W + 1)
		{
			if(val < prv[i])
			{
				wei = i;
				val = prv[i];
			}
		}
		
		
		cout << "Case " << caseNum << ":\n" << val << endl << wei << endl;
	}
}