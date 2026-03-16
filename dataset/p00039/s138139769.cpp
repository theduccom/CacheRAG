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
    string s;
    int a[51];
    while(cin >> s) {
        memset(a, -1, sizeof(a));
        repr(i,s.length() - 1,0) {
            if(s[i] == 'I') a[i] = 1;
            else if(s[i] == 'V') a[i] = 5;
            else if(s[i] == 'X') a[i] = 10;
            else if(s[i] == 'L') a[i] = 50;
            else if(s[i] == 'C') a[i] = 100;
            else if(s[i] == 'D') a[i] = 500;
            else if(s[i] == 'M') a[i] = 1000;
        }

        int prev = -1, ret = 0;
        repr(i,s.length() - 1,0) {
            if(a[i] >= prev) {
                prev = a[i];
                ret += a[i];
            }
            else {
                ret -= a[i];
            }
        }

        cout << ret << endl;
    }
    return 0;
}