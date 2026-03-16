#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<functional>
#include<cmath>
#include<map>
#include<stack>
#include<set>
#include<numeric>

using namespace std;

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define fi first
#define se second

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<int, pii> pip;

const ll INF = 1ll<<29;
const ll MOD = 1000000007;

int main()
{
	int n;
	while (cin >> n, n) {
		vector<char> rank(n);

		for (int i = 0; i < n; i++) {
			int pm, pe, pj;

			cin >> pm >> pe >> pj;

			double pm_pe_avg = (pm + pe) / 2.0;
			double all_avg = (pm + pe + pj) / 3.0;
			if (pm == 100 || pe == 100 || pj == 100) {
				rank[i] = 'A';
			}
			else if (pm_pe_avg >= 90 || all_avg >= 80)
				rank[i] = 'A';
			else if (all_avg >= 70 || (all_avg >= 50 && (pm >= 80 || pe >= 80))) {
				rank[i] = 'B';
			}
			else
				rank[i] = 'C';
		}
		for (int j = 0; j < n; j++)
			cout << rank[j] << endl;
	}
	return 0;
}