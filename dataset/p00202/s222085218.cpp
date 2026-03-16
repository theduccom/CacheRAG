#include <iostream>
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define REP(i,a) FOR(i,0,a)
using namespace std;
const int MAXN = 1000005;

int main(void){
    // Sieve of Eratosthenes
    int prime[MAXN];
    REP(i,MAXN) prime[i] = 1;
    prime[0] = prime[1] = 0;
    REP(i,1000)
        if (prime[i])
            for (int j=2*i; j < MAXN; j += i) prime[j] = 0;

    while (true){
        int n,x;
        cin >> n >> x;
        if (n == 0 && x == 0) break;
        int cost[n];
        REP(i,n) cin >> cost[i];

        // calc costs list
        int costs[MAXN] = {};
        REP(i,n) costs[cost[i]] = 1;
        REP(i,n)
            REP(j,MAXN-cost[i])
                if (costs[j]) costs[j+cost[i]] = 1;
                
        for (int i=x; i > 0; i--){
            if (prime[i] && costs[i]){
                cout << i << endl;
                break;
            }
            if (i == 1){
                cout << "NA" << endl;
                break;
            }
        }
    }
    return 0;
}