#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
#define INF (1 << 30)
using namespace std;

const int kN = 1000005;

void primeNumber(bool prime[kN]){
    rep(i,kN) prime[i] = 1;
    prime[0] = prime[1] = 0;
    rep(i,kN){
        if(prime[i]){
            for(int j = i + i; j < kN; j+=i){
                prime[j] = 0;
            }
        }
    }
}

void primeOfCuisine(int n, int a[40], bool prime[kN]){
    prime[0] = 1;
    rep(i,n){
        rep(j,kN){
            if(prime[j] == 1){
                if(j + a[i] >= kN) continue;
                prime[j + a[i]] = 1;
            }
        }
    }
}

void outputAns(bool a[kN], bool b[kN], int x){
    for(int i = x; i >= 0; i--){
        if(a[i] == 1 && b[i] == 1){
            cout << i << endl;
            return;
        }
    }
    cout << "NA" << endl;
    return;
}

int main(){
    int n, x, a[40];
    while(cin >> n >> x, n||x){
        bool is_prime[kN] = {0};
        bool is_prime_of_cuisine[kN] = {0};
        rep(i,n) cin >> a[i];
        primeNumber(is_prime);
        primeOfCuisine(n, a, is_prime_of_cuisine);
        outputAns(is_prime, is_prime_of_cuisine, x);
    }
}