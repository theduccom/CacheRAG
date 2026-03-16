
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

#ifdef _DEBUG
#define pf printf
#define pr(n) do { cout << #n " = " << (n) << endl; } while(0)
#else
#define pf(...) /* */
#define pr(...) /* */
#endif

const char *str[] = {
    "null",
    "one pair",
    "two pair",
    "three card",
    "straight",
    "full house",
    "four card",
};

bool is_fcd(int n[5],int m[12]){ return (m[0] == 4); }
bool is_flh(int n[5],int m[12]){ return (m[0] == 3 && m[1] == 2); }
bool is_str(int n[5],int m[12]){
    if(n[0] == n[1]-1 && n[1] == n[2]-1 && n[2] == n[3]-1 && n[3] == n[4]-1) return true;
    if(n[0] == 1 && n[1] == 10 && n[2] == 11 && n[3] == 12 && n[4] == 13) return true;
    return false;
}
bool is_thr(int n[5],int m[12]){ return (m[0] == 3); }
bool is_two(int n[5],int m[12]){ return (m[0] == 2 && m[1] == 2); }
bool is_one(int n[5],int m[12]){ return (m[0] == 2); }

int poker(int n[5]){
    int m[13];
    memset(m, 0, sizeof(m));
    REP(i,5) m[n[i]-1]++;
    sort(n, n+5, less<int>());
    sort(m, m+13, greater<int>());

    if(is_fcd(n,m)) return 6;
    if(is_flh(n,m)) return 5;
    if(is_str(n,m)) return 4;
    if(is_thr(n,m)) return 3;
    if(is_two(n,m)) return 2;
    if(is_one(n,m)) return 1;
    return 0;
}

int main(){
    string s;
    while(getline(cin, s)){
        int n[5];
        sscanf(s.c_str(), "%d,%d,%d,%d,%d", &n[0], &n[1], &n[2], &n[3], &n[4]);
        cout << str[poker(n)] << endl;
    }
    return 0;
}