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

string s[8];
void explode(int y, int x) {
    rep(i, max(0, y-3), min(8, y+4)) {
        if(s[i][x] == '1') {
            s[i][x] = '0';
            explode(i, x);
        }
    }

    rep(j, max(0,x-3), min(8, x+4)) {
        if(s[y][j] == '1') {
            s[y][j] = '0';
            explode(y, j);
        }
    }
}

int main() {
    int n; cin >> n;
    rep(k,0,n) {
        rep(i,0,8) cin >> s[i];
        int x, y; cin >> x >> y; x--; y--;

        explode(y, x);

        printf("Data %d:\n", k+1);
        rep(i,0,8) {
            rep(j,0,8) {
                cout << s[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}