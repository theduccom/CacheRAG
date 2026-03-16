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
    int a[5];
    int r[13];
    while(cin >> a[0]) {
        memset(r, 0, sizeof(r));
        r[a[0] - 1]++;
        rep(i,1,5) {
            scanf(",%d", &a[i]);
            r[a[i] - 1]++;
        }

        int x = 0, y = 0, z = 0;
        rep(i,0,13) {
            if(r[i] == 2) x++;
            if(r[i] == 3) y++;
            if(r[i] == 4) z++;
        }

        bool isnull = true;
        if(z == 1) {cout << "four card" << endl; continue;}
        else if(x == 1 && y == 1) {cout << "full house" << endl; continue;}
        else {
            rep(i,0,10) {
                if(r[i] == 1 && r[i+1] == 1 && r[i+2] == 1 && r[i+3] == 1 && r[(i+4) % 13] == 1) {
                    cout << "straight" << endl;
                    isnull = false;
                }
            }
        }

        if(y == 1) {cout << "three card" << endl; continue;}
        else if(x == 2) {cout << "two pair" << endl; continue;}
        else if(x == 1) {cout << "one pair" << endl; continue;}
        else if(isnull) cout << "null" << endl;
    }
    return 0;
}