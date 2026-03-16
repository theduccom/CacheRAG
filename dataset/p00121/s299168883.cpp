#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
map <int, int> d;//基本状態から状態iへの最短手数
const int dir[4] = {-4, -1, 1, 4};
int encode(int a[8]){
    int res = 0;
    rep(i, 8)
      res |= a[i] << (i * 3);
    return res;
}
void decode(int x, int a[8]){
    rep(i, 8)
      a[i] = (x >> (i * 3)) & 7;
}
void bfs(){
    queue <int> cnd;//condition（遷移する状態）
    cnd.push(16434824);
    d[16434824] = 0;
    while(cnd.size()){
        int sp[8];//作業用
        int bcnd = cnd.front(); cnd.pop();
        decode(bcnd, sp);
        int bz = find(sp, sp + 8, 0) - sp;
        rep(i, 4){
            int nz = bz + dir[i];
            if(nz < 0 || nz >= 8 || bz + nz == 7) continue;
            swap(sp[bz], sp[nz]);
            int ncnd = encode(sp);
            if(d.count(ncnd) == 0){
                d[ncnd] = d[bcnd] + 1;
                cnd.push(ncnd);
            }
            swap(sp[bz], sp[nz]);
        }
    }
}
int main(){
    bfs();
    while(true){
        int a[8];
        rep(i, 8)
          if(scanf("%d", a + i) == EOF)
            return 0;
        printf("%d\n", d[encode(a)]);
    }
}