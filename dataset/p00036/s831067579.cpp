
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

using namespace std;

#ifdef _MSC_VER
#define __typeof__ decltype
#endif

#define ITER(c)         __typeof__((c).begin())
#define FOREACH(it, c)  for (ITER(c) it=(c).begin(); it != (c).end(); ++it)
#define RITER(c)        __typeof__((c).rbegin())
#define RFOREACH(it, c) for (RITER(c) it=(c).rbegin(); it != (c).rend(); ++it)
#define REP(i, n)       REPEAT(i, 0, n)
#define REPEAT(i, k, n) for (int i = (k); i < (n); ++i)
#define REVREP(i, n)    for (int i = ((n)-1); i >= 0; --i)
#define FIND(c, n)      std::find((c).begin(), (c).end(), (n));
#define BSEARCH(c, n)   std::binary_search((c).begin(), (c).end(), (n))
#define LLPOW(p1,p2)    ((ll)pow((double)(p1), (int)p2))
#define ESIZEOF(A)      (sizeof(A)/sizeof((A)[0]))
#define MIN(p1,p2)      (((p1)<(p2))?(p1):(p2))
#define MAX(p1,p2)      (((p1)>(p2))?(p1):(p2))
#define CIN_NO_SYNC     do { cin.tie(0); ios_base::sync_with_stdio(false); } while(0)
#define GETSTR(p)       fgets((p), sizeof(p), stdin)
#define CHOMP(p)        do{ char *_q = (p) + strlen(p)-1; if(*_q == '\n') *_q = 0; } while(0)

typedef long long ll;
typedef unsigned long long ull;

#define X real()
#define Y imag()
typedef double D;
typedef complex<D> P;
#define EPS (1e-9)

inline D inprd(const P &a, const P &b){ return (conj(a) * b).X; }
inline D outprd(const P &a, const P &b){ return (conj(a) * b).Y; }
inline D sign(D d){ return (d<0)?-1:d>0?1:0; }

#ifdef _DEBUG
#define pf printf
#define pr(n) do { cout << #n " = " << (n) << endl; } while(0)
#else
#define pf(...) /* */
#define pr(...) /* */
#endif

int table[7][6] = {
    { 1,0, 0,1, 1,1 },  // A
    { 0,1, 0,2, 0,3 },  // B
    { 1,0, 2,0, 3,0 },  // C
    {-1,1, 0,1,-1,2 },  // D
    { 1,0, 1,1, 2,1 },  // E
    { 0,1, 1,1, 1,2 },  // F
    { 1,0,-1,1, 0,1 },  // G
};

int main(){
    deque<string> sv;
    string s;
    cin.binary;
    while(getline(cin, s)){
        if(s == "") continue;
        sv.push_back(s);
        s = "";
    }

    if(sv.size() % 8 != 0) throw;
    int n = sv.size() / 8;
    REP(i,n){
        char m[8][8];
        REP(y,8){
            string s = sv.front(); sv.pop_front();
            REP(x,8){
                m[y][x] = s[x] - '0';
            }
        }
        bool f = false;
        REP(y,8) REP(x,8){
            if(m[y][x]){
                REP(t,7){
                    bool f2 = true;
                    REP(u,3){
                        int nx = x + table[t][u*2+0];
                        int ny = y + table[t][u*2+1];
                        if(nx < 0 || nx >= 8 || ny < 0 || ny >= 8 || m[ny][nx] == 0){
                            f2 = false; break;
                        }
                    }
                    if(f2){
                        printf("%c\n", 'A' + t);
                        goto END;
                    }
                }
            }
        }
END:;
    }

    return 0;
}