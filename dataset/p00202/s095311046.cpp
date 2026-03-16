#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

const int N = 1000000;
int dp[N + 1], primes[N + 1];
int main(){
    fill(primes, primes + N + 1, 1);
    primes[0] = primes[1] = 0;
    for(int i = 2;i <= sqrt(N);++i){
        if(primes[i]){
            for(int j = i + i;j <= N;j += i){
                primes[j] = 0;
            }
        }
    }
    int n, x, a, ans;
    int ps[30];
    while(cin >> n >> x, n && x){
        fill(dp, dp + N + 1, 0);
        ans = 0;
        for(int i = 0;i < n;++i){
            cin >> a;
            ps[i] = a;
            dp[a] = 1;
        }
        for(int i = 0;i <= x;++i){
            if(dp[i]){
                for(int j = 0;j < n;++j){
                    if(i + ps[j] <= N && !dp[i + ps[j]]){
                        dp[i + ps[j]] = 1;
                    }
                }
            }
        }
        for(int i = x;i > 0;--i){
            if(dp[i] && primes[i]){
                ans = i;
                break;
            }
        }
        if(ans) cout << ans << endl;
        else cout << "NA" << endl;
    }
}