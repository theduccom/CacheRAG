#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using namespace std;

struct UnionFind {
    vector<int> par;
    int cnt;
    UnionFind(int size_) : par(size_, -1), cnt(size_) { }
    bool merge(int x, int y){
        x = find(x); y = find(y);
        if (x != y) {
            if (par[y] < par[x]) swap(x, y);
            par[x] += par[y]; par[y] = x;
            cnt--;
        }
        return x != y;
    }
    bool get(int x, int y){
        return find(x) == find(y);
    }
    int find(int x){
        return par[x] < 0 ? x : par[x] = find(par[x]);
    }
};

int main(){
    char g[30][30];
    while(cin >> g[0]){
        UnionFind uf(144);
        rep(i,11) cin >> g[i+1];
        rep(i,12)rep(j,12){
            if(i != 11 && g[i][j] == g[i+1][j]){
                uf.merge(i*12 + j , i*12 + j + 12);
            }
            if(j != 11 && g[i][j] == g[i][j+1]){
                uf.merge(i*12 + j , i*12 + j + 1);
            }
        }
        set<int> isl;
        rep(i,12)rep(j,12){
            if(g[i][j] == '1') isl.insert(uf.find(i*12+j));
        }
        cout << isl.size() << endl;
    }
}