#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <iomanip>
#include <functional>
using namespace std;
#define REP(i,n) for (int i=0;i<(n);++i)
#define rep(i,a,b) for(int i=a;i<(b);++i)
template<class T> inline bool chmin(T &a, T b){ if(a > b) { a = b; return true;} return false;}
template<class T> inline bool chmax(T &a, T b){ if(a < b) { a = b; return true;} return false;}
using ll = long long;
constexpr long long INF = 1LL << 62;
constexpr int MOD = 1e9 + 7;
constexpr double EPS = 1e-10;

int main() {
    cin.tie(0); ios_base::sync_with_stdio(false);
    rep(i,1,10) 
        rep(j,1,10) 
            cout << i << 'x' << j << '=' << i*j << '\n';
    return 0;
}
