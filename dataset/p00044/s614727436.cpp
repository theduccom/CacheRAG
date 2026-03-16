#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <ctime>
using namespace std;

#define rep(i,a,n) for(int i=a; i<n; i++)
#define repr(i,a,n) for(int i=a; i>=n; i--)
#define pb(a) push_back(a)
#define fr first
#define sc second
#define INF 999999999

#define X real()
#define Y imag()
#define EPS (1e-10)
#define EQ(a,b) (abs((a) - (b)) < EPS)
#define EQV(a,b) ( EQ((a).X, (b).X) && EQ((a).Y, (b).Y) )
#define LE(n, m) ((n) < (m) + EPS)
#define GE(n, m) ((n) + EPS > (m))

typedef vector<int> VI;
typedef vector<VI> MAT;
typedef pair<int, int> pii;
typedef long long int ll;

typedef complex<double> P;
typedef pair<P, P> L;
typedef pair<P, double> C;

int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};
int const MOD = 1000000007;

namespace std {
    bool operator<(const P a, const P b) {
        return a.X != b.X ? a.X < b.X : a.Y < b.Y;
    }
}

vector<int> erat(int n) {
    vector<int> primes(n);
    for (int i = 2; i < n; ++i) primes[i] = i;
    for (int i = 2; i*i < n; ++i)
        if (primes[i])
            for (int j = i*i; j < n; j+=i) primes[j] = 0;
    // ?´???°?????????vector???????´?????????´????????\?????????????????? (0 ??§??????????´??????¨??????)
    primes.erase(remove(primes.begin(), primes.end(), 0), primes.end());
    return primes;
}

int main() {
    vector<int> v = erat(55000);

    int n;
    while(cin >> n) {
        int d = lower_bound(v.begin(), v.end(), n) - v.begin();
        if(v[d] == n) printf("%d %d\n",v[d-1],v[d+1]);
        else printf("%d %d\n",v[d-1], v[d]);
    }
    return 0;
}