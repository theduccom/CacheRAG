#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pint;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define IREP(i, n) for(int i = (int)(n) - 1; i >= 0; i--)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LMAX LLONG_MAX
#define LMIN LLONG_MIN
template<typename T> inline void chmin(T &a, T b){ if(a > b) a = b; }
template<typename T> inline void chmax(T &a, T b){ if(a < b) a = b; }
template<typename T> inline void xch(T &a, T &b){ T w = a; a = b; b = w; }

int main() {
    REP(i, 9){
        REP(j, 9){
            std::cout << i + 1 << "x" << j + 1 << "=" << (i + 1) * (j + 1) << endl;
        }
    }
    
    return 0;
}

