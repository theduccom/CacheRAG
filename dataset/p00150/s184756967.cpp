#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 10010;

bool isPrime[MAX_N];
vector<int> prime;
void eratosthenes(int n){
    for(int i=0; i<=n; i++) isPrime[i] = true;
    isPrime[0] = false, isPrime[1] = false;

    for(int i=2; i*i<=n; i++){
        if(isPrime[i]){
            for(int j=2; i*j<=n; j++){
                isPrime[i*j] = false;
            }
        }
    }

    for(int i=0; i<MAX_N; i++){
        if(isPrime[i]){
            prime.emplace_back(i);
        }
    }
}

int main(){
    eratosthenes(10005);

    vector<int> twinLarge;
    for(int i=0; i<prime.size()-1; i++){
        if(prime[i] + 2 == prime[i+1]){
            twinLarge.emplace_back(prime[i+1]);
        }
    }

    int cnt = 0;
    int m = twinLarge.size();
    vector<int> ans(10010, -1);
    for(int i=5; i<=10000; i++){
        if(twinLarge[min(cnt+1, m-1)] == i){
            cnt++;
        }

        ans[i] = twinLarge[min(cnt, m-1)];
    }

    while(1){
        int n; cin>>n;
        if(n == 0) return 0;
        cout << ans[n] - 2 << " " << ans[n] << endl;
    }
}
