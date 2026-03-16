#include <bits/stdc++.h>

#define rep_(v, f, l) for (int v = (f); v < (l); ++v)
#define rep(v, n) rep_(v, 0, n)
#define lep(v, n) rep_(v, 1, n + 1)

using namespace std;

typedef long long int lint;

static inline int in(){ int x; scanf("%d", &x); return x; }
static inline lint inl(){ lint x; scanf("%lld", &x); return x; }

const int MAX_N = 10000;

int main()
{
    bool sieve[MAX_N + 1];
    rep(i, MAX_N + 1) sieve[i] = true;
    for (int i = 2; i * i <= MAX_N; i++){
        for (int j = i * i; j <= MAX_N; j += i){
            sieve[j] = false;
        }
    }

    int n;
    while (n = in()){
        while (!(sieve[n] && sieve[n - 2])) n--;
        printf("%d %d\n", n - 2, n);
    }
    return (0);
}