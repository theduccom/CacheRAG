#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

struct UF {
  int siz;
  vector<int> p;
  UF(int n) : siz(n),p(n,-1) {}
  int rt(int x) { return p[x]<0 ? x : p[x]=rt(p[x]); }
  void cat(int x, int y) {
    x=rt(x); y=rt(y);
    if(x==y) return;
    siz--;
    if(p[x]<p[y]) swap(x,y);
    p[y]+=p[x];
    p[x]=y;
  }
};

int main() {
  static char tbl[20][20];
  for(int tci = 0; ; tci++) {
    int pty = 0;
    for(int y = 0; y < 12; y++) {
      if(scanf(" %s", tbl[y])<1) return 0;
      for(int x = 0; x < 12; x++) {
        pty += (tbl[y][x]=='0');
      }
    }
    UF uf(12*12);
    for(int y = 0; y < 12; y++) {
      for(int x = 0; x < 12; x++) {
        if(y>0 && tbl[y][x]=='1' && tbl[y-1][x]=='1') uf.cat(12*y+x, 12*(y-1)+x);
        if(x>0 && tbl[y][x]=='1' && tbl[y][x-1]=='1') uf.cat(12*y+x, 12*y+(x-1));
      }
    }
    printf("%d\n", uf.siz-pty);
  }
  return 0;
}