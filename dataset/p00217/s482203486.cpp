#include<bits/stdc++.h>
#define REP(i,n) for(long long i=0;i<n;++i)
#define FOR(i,a,b) for(long long i=a;i<b;++i)
using namespace std;
using point = pair< int,int >;
using ll = long long;

int main(){
    int n;
    int maxp, maxv;
    int p, d1, d2;
    while (~scanf("%d", &n)) {
        maxv = INT_MIN;
        REP(i, n) {
            scanf("%d%d%d", &p, &d1, &d2);
            if (d1 + d2 > maxv) {
                maxv = d1 + d2;
                maxp = p;
            }
        }
        if (n) printf("%d %d\n", maxp, maxv);
    }

    return 0;
}


