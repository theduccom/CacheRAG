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

namespace std {
    bool operator<(const P a, const P b) {
        return a.X != b.X ? a.X < b.X : a.Y < b.Y;
    }
}

int const MOD = 1000000007;

int main() {
    int W,N;
    int c = 0;
    while(cin >> W) {
        if(W == 0) break;
        c++;
        cin >> N;
        int v[1010], w[1010];

        rep(i,0,N) scanf("%d,%d",&v[i], &w[i]);
        int dp[1010][1010];
        rep(j,0,W+1) dp[0][j] = 0;
        rep(i,0,N) {
            rep(j,0,W+1) {
                if(j < w[i]) dp[i+1][j] = dp[i][j];
                else dp[i+1][j] = max(dp[i][j], dp[i][j-w[i]] + v[i]);
            }
        }

        int a = 0, b = 0;
        rep(i,0,W+1) {
            if(dp[N][i] > a) {
                a = dp[N][i];
                b = i;
            }
        }

        printf("Case %d:\n", c);
        cout << a << endl;
        cout << b << endl;
    }

    return 0;
}