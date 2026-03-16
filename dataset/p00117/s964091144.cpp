/*
A Reward for a Carpenter(https://onlinejudge.u-aizu.ac.jp/problems/0117)
右
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <cmath>
#include <complex>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cassert>
#include <iomanip>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define Repr(e, b, i) for(int i = e; i >= b; i--)
#define rep(n, i) Rep(0, n-1, i)
#define repr(n, i) Repr(n-1, 0, i)
#define all(v) (v).begin(), (v).end()
#define pb(v) push_back(v)
#define uniq(v) (v).erase(unique(all(v)),(v).end())
#define bitcnt(x) __builtin_popcount(x)
#define fst first
#define snd second
#define Pqaz(T) priority_queue<T,vector<T>,greater<T>>
#define Pqza(T) priority_queue<T>
#define put(x) cout << x;
#define putsp(x) cout << x << ' ';
#define putln(x) cout << x << endl;
#define ENJYU std::ios::sync_with_stdio(false);std::cin.tie(0);

typedef long long ll;
typedef pair<ll, ll> llP;
typedef pair<int, int> intP;
typedef complex<double> comp;
typedef vector <int> vec;
typedef vector <ll> vecll;
typedef vector <double> vecd;
typedef vector <vec> mat;
typedef vector <vecll> matll;
typedef vector <vecll> matd;

//vector の中身を出力
template <class T>ostream &operator<<(ostream &o,const vector<T>&v)
{o<<"{";for(int i=0;i<(int)v.size();i++)o<<(i>0?", ":"")<<v[i];o<<"}";return o;}

const int MAX = 32;
const int INF = 1<<29;

int wf[MAX][MAX];

void solve(void){
	int N, M, s, g, V, P;
	char cc;
	cin >> N >> M;

	//初期化
	rep(N, i) rep(N, j) wf[i][j] = INF;


	rep(M, i)
	{
		char cc;
		int a, b, c, d;
		cin >> a >> cc >> b >> cc >> c >> cc >> d;

		//cout << a << b << c << d << endl;

		a--, b--;
		wf[a][b] = c;
		wf[b][a] = d;
	}

	//WF
	rep(N, k) rep(N, i) rep(N, j) wf[i][j] = min(wf[i][j], wf[i][k] + wf[k][j]);

	cin >> s >> cc >> g >> cc >> V >> cc >> P;
	s--, g--;

	/*Debug
	rep(N, i) rep(N, j)
	{
		cout << wf[i][j] << ' ';
		if (j == N-1) cout << endl;
	}
	*/


	//往復の交通費と柱代を差し引いたものが答え
	cout << V - P - wf[s][g] - wf[g][s] << endl;

}

int main(void){
	solve();
	//cout << "yui(*-v・)yui" << endl;
	return 0;
}

