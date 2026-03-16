#include <bits/stdc++.h>

#define rep_(v, f, l) for (int v = (f); v < (l); ++v)
#define rep(v, n) rep_(v, 0, n)
#define lep(v, n) rep_(v, 1, n + 1)

using namespace std;

typedef long long int lint;

static inline int in(){ int x; scanf("%d", &x); return x; }
static inline lint inl(){ lint x; scanf("%lld", &x); return x; }

struct UF {
    vector<int> data;
    UF(int n) : data(n, -1) {}
    bool merge(int x, int y){
        x = root(x);
        y = root(y);
        if (x != y){
            if (data[y] < data[x]) swap(x, y);
            data[x] += data[y];
            data[y] = x;
        }
        return x != y;
    }
    bool isSame(int x, int y){
        return root(x) == root(y);
    }
    int root(int x){
        return data[x] < 0 ? x : data[x] = root(data[x]);
    }
    int size(int x){
        return -data[root(x)];
    }
};

int main()
{
    int w, h;
    while (w = in(), h = in()){
        UF uf(w * h);
        int sx, sy;
        sx = in() - 1;
        sy = in() - 1;
        int gx, gy;
        gx = in() - 1;
        gy = in() - 1;
        int n = in();
        int field[128][128] = {};
        rep(i, n){
            int c, d, x, y;
            c = in();
            d = in();
            x = in() - 1;
            y = in() - 1;
            rep(j, 4) rep(k, 2){
                if (!d) field[y + k][x + j] = c;
                else field[y + j][x + k] = c;
            }
        }
        rep(i, h){
            rep(j, w){
                if (i + 1 < h && field[i][j] == field[i + 1][j]){
                    uf.merge(i * w + j, i * w + j + w);
                }
                if (j + 1 < w && field[i][j] == field[i][j + 1]){
                    uf.merge(i * w + j, i * w + j + 1);
                }
            }
        }

        if (uf.isSame(sy * w + sx, gy * w + gx)){
            puts("OK");
        }
        else {
            puts("NG");
        }
    }
    return (0);
}