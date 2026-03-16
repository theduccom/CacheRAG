#include <iostream>
#include <iomanip>
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
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <functional>
using namespace std;

#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define repq(i,a,n) for(int (i)=(a); (i)<=(n); (i)++)
#define repr(i,a,n) for(int (i)=(a); (i)>=(n); (i)--)
#define int long long int

template<typename T> void chmax(T &a, T b) {a = max(a, b);}
template<typename T> void chmin(T &a, T b) {a = min(a, b);}
template<typename T> void chadd(T &a, T b) {a = a + b;}

typedef pair<int, int> pii;
typedef long long ll;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
constexpr ll INF = 1001001001001001LL;
constexpr ll MOD = 1000000007LL;

int N, M, dist[50][50];

signed main() {
    cin >> N >> M;
    rep(i,0,N) rep(j,0,N) {
        if(i == j) dist[i][j] = 0;
        else dist[i][j] = INF;
    }

    rep(i,0,M) {
        int a, b, c, d;
        scanf("%lld,%lld,%lld,%lld", &a, &b, &c, &d);
        a--; b--;
        dist[a][b] = c;
        dist[b][a] = d;
    }

    rep(k,0,N) rep(i,0,N) rep(j,0,N) {
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
        // printf("dist[%lld][%lld] = %lld\n", i, j, dist[i][j]);
    }

    int s, g, V, P;
    scanf("%lld,%lld,%lld,%lld", &s, &g, &V, &P);
    s--; g--;
    int cost = dist[s][g] + dist[g][s];

    cout << V - P - cost << endl;
    return 0;
}