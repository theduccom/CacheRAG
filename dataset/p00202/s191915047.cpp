#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
#define INF 1e9


int main(){
    int N = 1e6+1;
    vector<bool> isPrime(N, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i*i < N; i++) {
        if (!isPrime[i]) continue;
        for (int j = i*i; j < N; j += i) isPrime[j] = false;
    }

    while(true){
        int n,x;
        cin >> n >> x ;
        if(n == 0 && x == 0){
            break;
        }

        vector<int> dishes(n,0);

        FOR(i,0,n){
            cin >> dishes[i];
        }
        vector<bool> dp(x+1,false);
        dp[0] = true;

        int ans = 0;
        for(auto dish:dishes){
            FOR(i,0,x+1){
                if((i+dish < x+1) && dp[i]){
                    if(isPrime[i+dish])
                       ans = max(ans,i + dish);
                    dp[i+dish] = true;
                }
            }
        }

        if(ans == 0)
            cout << "NA" << endl;
        else
            cout << ans << endl;
    }
    return 0;
}