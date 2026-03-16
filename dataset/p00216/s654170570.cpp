#include <bits/stdc++.h>

#define rep_(v, f, l) for (int v = (f); v < (l); ++v)
#define rep(v, n) rep_(v, 0, n)
#define lep(v, n) rep_(v, 1, n + 1)

using namespace std;

typedef long long int lint;

static inline int in(){ int x; scanf("%d", &x); return x; }
static inline lint inl(){ lint x; scanf("%lld", &x); return x; }

int calc_price(int w)
{
    int cost = 1150;
    if (w <= 10) return cost;
    if (w <= 20) return cost + (w - 10) * 125;
    cost += 1250;
    if (w <= 30) return cost + (w - 20) * 140;
    cost += 1400;
    return cost + (w - 30) * 160;
}

int main()
{
    int w;
    while (w = in(), ~w){
        printf("%d\n", 4280 - calc_price(w));
    }
    return (0);
}