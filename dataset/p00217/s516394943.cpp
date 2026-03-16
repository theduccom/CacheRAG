#include <bits/stdc++.h>

#define rep_(v, f, l) for (int v = (f); v < (l); ++v)
#define rep(v, n) rep_(v, 0, n)
#define lep(v, n) rep_(v, 1, n + 1)

using namespace std;

typedef long long int lint;
typedef pair<int, int> pii;

static inline int in(){ int x; scanf("%d", &x); return x; }
static inline lint inl(){ lint x; scanf("%lld", &x); return x; }

int main()
{
    int n;
    while (n = in()){
        vector<pii> ds;
        rep(i, n){
            int p, d;
            p = in();
            d = in() + in();
            ds.push_back(make_pair(d, p));
        }
        sort(ds.begin(), ds.end());
        printf("%d %d\n", ds[n - 1].second, ds[n - 1].first);
    }
    return (0);
}