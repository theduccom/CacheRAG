#include <iostream>
#include <cstdio>
#include <string>
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
    string s[] = {"1100000011", "1000000010000000100000001", "1111", "1000000110000001", "11000000011", "100000001100000001", "110000011"};
    char c[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    string a[8];
    while(cin >> a[0]) {
        rep(i,1,8) cin >> a[i];
        string merge;
        rep(i,0,8) merge += a[i];

        rep(i,0,7) {
            if(merge.find(s[i]) != string::npos) cout << c[i] << endl;
        }
    }
    return 0;
}