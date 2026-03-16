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


struct edge
{
	int to, cost;
	edge(int to, int cost) : to(to), cost(cost){}
};

const int INF = 1 << 29;


int main()
{
    int n, m;
	
	cin >> n >> m;
	
	vector<vint> G(n, vint(n, INF));
	rep(i, m)
	{
		int a, b, c, d;
		char k;
		
		cin >> a >> k >> b >> k >> c >> k >> d;
		
		G[a-1][b-1] = c;
		G[b-1][a-1] = d;
	}
	
	
	rep(k, n) rep(i, n) rep(j, n)
		chmin(G[i][j], G[i][k] + G[k][j]);
	
	int s, t, ta, gi;
	char k;
	cin >> s >> k >> t >> k >> ta >> k >> gi;
	
	cout << ta - gi - G[s-1][t-1] - G[t-1][s-1] << endl;
}