#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<set>
#include<map>
#define REP(i, N) for(ll i = 0; i < N; ++i)
#define FOR(i, a, b) for(ll i = a; i < b; ++i)
#define ALL(a) (a).begin(),(a).end()
#define pb push_back
#define INF (long long)1000000000
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void) {
	while(true) {
		int n, m;
		cin>>n>>m;
		if(n == 0 && m == 0) break;
		vector<vector<pair<ll, P> > > l(m, vector<pair<ll, P> >(0));
		REP(i, n) {
			ll a, b, c, t;
			cin>>a>>b>>c>>t;
			--a;
			--b;
			l[a].pb(pair<ll, P>(b, P(c, t)));
			l[b].pb(pair<ll, P>(a, P(c, t)));
		}
		vector<vector<ll> > d0(m, vector<ll>(m, INF));
		vector<vector<ll> > d1(m, vector<ll>(m, INF));
		REP(i, m) {
			REP(j, l[i].size()) {
				d0[i][l[i][j].first] = l[i][j].second.first;
				d0[l[i][j].first][i] = l[i][j].second.first;
				d1[i][l[i][j].first] = l[i][j].second.second;
				d1[l[i][j].first][i] = l[i][j].second.second;
			}
		}
		REP(k, m) {
			REP(i, m) {
				REP(j, m) {
					d0[i][j] = min(d0[i][j], d0[i][k] + d0[k][j]);
					d1[i][j] = min(d1[i][j], d1[i][k] + d1[k][j]);
				}
			}
		}
		int k;
		cin>>k;
		REP(i, k) {
			int p, q, r;
			cin>>p>>q>>r;
			--p;
			--q;
			if(r == 0) {
				cout<<d0[p][q]<<endl;
			} else {
				cout<<d1[p][q]<<endl;
			}
		}
	}
}