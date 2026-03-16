#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007
#define MAX_N 5001
#define EPS 1e-10

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<string, ll> PS;
typedef vector<ll> V;

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;


double xa, ya, ra, xb, yb, rb, d;
ll n;

int main(){
	cin >> n;
	REP(i, n){
		cin >> xa >> ya >> ra >> xb >> yb >> rb;

		if (xa == xb&&ya == yb) d = 0;
		else d = sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb));

		if (ra + rb < d)cout << 0 << endl;
		else if (d + ra < rb)cout << -2 << endl;
		else if (d + rb < ra)cout << 2 << endl;
		else cout << 1 << endl;
	}
}