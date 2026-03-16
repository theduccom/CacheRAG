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

double area_n(const vector<P> &v) {
    double ans = 0;
    double x, y, z;
    P init = v[0];
    rep(i,2,v.size()) {
        x = sqrt(norm(v[i] - init));
        y = sqrt(norm(v[i-1] - init));
        z = sqrt(norm(v[i] - v[i-1]));

        double s = (x + y + z) / 2;
        ans += sqrt(s * (s-x) * (s-y) * (s-z));
    }
    return ans;
}

int main() {
    vector<P> v;
    double a, b;
    while(~scanf("%lf,%lf", &a, &b)) v.pb(P(a,b));

    printf("%.8f\n",area_n(v));
    return 0;
}