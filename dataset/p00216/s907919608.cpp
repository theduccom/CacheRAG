#include<bits/stdc++.h>
#define REP(i,n) for(long long i=0;i<n;++i)
#define FOR(i,a,b) for(long long i=a;i<b;++i)
using namespace std;
using point = pair< int,int >;
using ll = long long;

int main(){
    int w, sum;
    while (~scanf("%d", &w)) {
        if (!~w) break;
        sum = 1150;
        if (w > 30) sum += (w - 30) * 160 + 1400 + 1250;
        else if (w > 20) sum += (w - 20) * 140 + 1250;
        else if (w > 10) sum += (w - 10) * 125;

        printf("%d\n", 4280 - sum);
    }

    return 0;
}


