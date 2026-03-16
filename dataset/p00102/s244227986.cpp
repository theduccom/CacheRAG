
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <memory>
#include <string>

#include <algorithm>
#include <complex>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <bitset>

using namespace std;

#ifdef _MSC_VER
#define __typeof__ decltype
#define strtok_r strtok_s
#endif

#define ITER(c)             __typeof__((c).begin())
#define FOREACH(it, c)      for (ITER(c) it=(c).begin(); it != (c).end(); ++it)
#define RITER(c)            __typeof__((c).rbegin())
#define RFOREACH(it, c)     for (RITER(c) it=(c).rbegin(); it != (c).rend(); ++it)
#define REP(i, n)           REPEAT(i, 0, n)
#define RREP(i, n)          RREPEAT(i, 0, n)
#define REPEAT(i, k, n)     for(int i = (k); i < (k+n); ++i)
#define RREPEAT(i, k, n)    for(int i = (k)+(n)-1; i >= (k); --i)
#define FROMTO(i,f,t)       for(int i = f; i < t; i++)
#define ALL(c)              (c).begin(), (c).end()
#define LLPOW(p1,p2)        ((ll)pow((double)(p1), (int)p2))
#define ESIZEOF(A)          (sizeof(A)/sizeof((A)[0]))
#define CIN_NO_SYNC         do { cin.tie(0); ios_base::sync_with_stdio(false); } while(0)
#define GETSTR(p)           fgets((p), sizeof(p), stdin)
#define CHOMP(p)            do{ char *_q = (p) + strlen(p)-1; if(*_q == '\n' || *_q == '\r') *_q = 0; } while(0)
#define FILL(m,v)           memset(m, v, sizeof(m))
#define mp                  make_pair
#define pb                  push_back
template<class _T> _T MAX(_T p1,_T p2){return (p1>p2)?p1:p2;} 
template<class _T> _T MIN(_T p1,_T p2){return (p1<p2)?p1:p2;} 

typedef long long ll;
typedef unsigned long long ull;

#define X real()
#define Y imag()
typedef double D;
typedef complex<D> P;
#define EPS (1e-9)

#ifdef _DEBUG
template<class _T>
inline void _prfe(const char *_n, _T _c, bool _p = false){
    ITER(_c) _it=_c.begin();
    if(_p){ cout<<_n<<" = ["<<endl;for(;_it!=_c.end();++_it)cout<<"    "<<*_it<<endl;cout<<"]"<<endl; }
    else{ cout<<_n<<" = [ "<<*_it++;for(;_it!=_c.end();++_it)cout<<", "<<*_it;cout<<" ]"<<endl; }
}
#define pf printf
#define pr(n) do{cout<<#n" = "<<(n)<<endl;}while(0)
#define prfe(n) _prfe(#n, n)
#define prfep(n) _prfe(#n, n, true)
#define dbgchk(n) do{if(n)throw;}while(0)
#else
#define pf(...) /* */
#define pr(...) /* */
#define prfe(...) /* */
#define prfep(...) /* */
#define dbgchk(...) /* */
#endif

int main(){
    int n, m;
    while(cin >> n){
        if(n == 0) break;

        int t[11][11];
        FILL(t,0);
        REP(y,n) REP(x,n){
            cin >> m;
            t[y][x] = m; t[y][n] += m; t[n][x] += m; t[n][n] += m;
        }
        REP(y,n+1){
            REP(x,n+1){
                printf("%5d", t[y][x]);
            }
            printf("\n");
        }
    }
    return 0;
}