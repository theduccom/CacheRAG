#include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 50000;
    vector<int> primes;
    vector<bool> is_prime(N,true);

    for (int j=2; j<=N; j++) {
        if(is_prime[j]){
            for (int k=2; k<=N/j;k++){
                is_prime[j*k] = false;
            }
        }
    }

    while(1){
        int n;
        cin >> n;
        int m = n/2;
        if (n == 0) break;
        int res = 0;
        for (int j=2;j<=m;j++) {
            if(is_prime[j] && is_prime[n-j]){
                res++;
            }
        }
        cout << res << endl;
    }
}
