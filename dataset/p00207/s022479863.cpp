#include <bits/stdc++.h>
using namespace std;

struct UnionFindTree {
    vector<int> par;
    vector<int> rank;
    vector<int> siz;

    void init(int n) {
        par.resize(n);
        rank.resize(n);
        siz.resize(n);
        for (int i = 0; i < n; i++) {
            par[i] = i;
            rank[i] = 0;
            siz[i] = 1;
        }
    }
    int find(int x) {
        if (par[x] == x) {
            return x;
        } else {
            return par[x] = find(par[x]);
        }
    }
    void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) return;
        if (rank[x] < rank[y]) swap(x, y);
        if (rank[x] == rank[y]) rank[x]++;
        par[y] = x;
        siz[x] += siz[y];
    }
    bool is_same(int x, int y) {
        return find(x) == find(y);
    }
    int size(int x) {
        x = find(x);
        return siz[x];
    }
};

int main(){
    int h, w;
    while(cin >> w >> h, h){
        int xs, ys, xg, yg;
        int n;
        cin >> xs >> ys >> xg >> yg >> n;
        xs--; ys--; xg--; yg--;
        vector<vector<int> > color(h, vector<int>(w,0));
        for(int i=0;i<n;i++){
            int c, d, x, y;
            cin >> c >> d >> x >> y;
            x--; y--;
            for(int dy=0;dy<(d?4:2);dy++){
                for(int dx=0;dx<(d?2:4);dx++){
                    color[y+dy][x+dx] = c;
                }
            }
        }
        UnionFindTree uf;
        uf.init(h*w);
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(color[i][j] == 0) continue;
                if(i+1<h && color[i][j] == color[i+1][j]){
                    uf.unite(i*w+j, (i+1)*w+j);
                }
                if(j+1<w && color[i][j] == color[i][j+1]){
                    uf.unite(i*w+j, i*w+j+1);
                }
            }
        }
        cout << (uf.is_same(ys*w+xs,yg*w+xg) ? "OK" : "NG") << endl;
    }

    return 0;
}
