
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
#endif

#define ITER(c)             __typeof__((c).begin())
#define FOREACH(it, c)      for (ITER(c) it=(c).begin(); it != (c).end(); ++it)
#define RITER(c)            __typeof__((c).rbegin())
#define RFOREACH(it, c)     for (RITER(c) it=(c).rbegin(); it != (c).rend(); ++it)
#define REP(i, n)           REPEAT(i, 0, n)
#define RREP(i, n)          RREPEAT(i, 0, n);
#define REPEAT(i, k, n)     for(int i = (k); i < (k+n); ++i)
#define RREPEAT(i, k, n)    for(int i = (k)+(n)-1; i >= (k); ++i)
#define ALL(c)              (c).begin(), (c).end()
#define LLPOW(p1,p2)        ((ll)pow((double)(p1), (int)p2))
#define ESIZEOF(A)          (sizeof(A)/sizeof((A)[0]))
#define MIN(p1,p2)          (((p1)<(p2))?(p1):(p2))
#define MAX(p1,p2)          (((p1)>(p2))?(p1):(p2))
#define CIN_NO_SYNC         do { cin.tie(0); ios_base::sync_with_stdio(false); } while(0)
#define GETSTR(p)           fgets((p), sizeof(p), stdin)
#define CHOMP(p)            do{ char *_q = (p) + strlen(p)-1; if(*_q == '\n' || *_q == '\r') *_q = 0; } while(0)
#define mp                  make_pair

typedef long long ll;
typedef unsigned long long ull;

#define X real()
#define Y imag()
typedef double D;
typedef complex<D> P;
#define EPS (1e-9)

#ifdef _DEBUG
#define pf printf
#define pr(n) do { cout << #n " = " << (n) << endl; } while(0)
#else
#define pf(...) /* */
#define pr(...) /* */
#endif

D triangle_S(P p1, P p2, P p3){
    D l1 = sqrt(norm(p1-p2));
    D l2 = sqrt(norm(p2-p3));
    D l3 = sqrt(norm(p3-p1));
    D z = (l1 + l2 + l3) / 2;
    return sqrt(z * (z - l1) * (z - l2) * (z - l3));
}

void solve(vector<P> &v){
    int n = v.size();
    double sum = 0;
    REPEAT(i, 1, n-2){
        //cout << v[0] << " : " << v[i] << " : " << v[i+1] << endl;
        sum += triangle_S(v[0], v[i], v[i+1]);
    }
    printf("%.9f\n", sum);
}

int main(){
    string s;
    vector<P> v;
    while(cin >> s){
        D x, y;
        sscanf(s.c_str(), "%lf,%lf", &x, &y);
        P p(x,y);
        v.push_back(p);
    }
    solve(v);
    return 0;
}