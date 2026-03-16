#include <bits/stdc++.h>

#define rep_(v, f, l) for (int v = (f); v < (l); ++v)
#define rep(v, n) rep_(v, 0, n)
#define lep(v, n) rep_(v, 1, n + 1)

using namespace std;

typedef long long int lint;

static inline int in(){ int x; scanf("%d", &x); return x; }
static inline lint inl(){ lint x; scanf("%lld", &x); return x; }

int draw_line(int c)
{
    if (c == 0) return puts("-");
    rep(i, c) printf("*");
    return puts("");
}

int main()
{
    int n;
    while (n = in()){
        int ice[10] = {};
        rep(i, n){
            ice[in()]++;
        }
        rep(i, 10) draw_line(ice[i]);
    }
    return (0);
}