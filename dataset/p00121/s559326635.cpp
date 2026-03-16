#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr,__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

struct P {
    int cnt;
    vi c;
};

const int dxdy[] = {1,4,-1,-4};

char G[8][8][8][8][8][8][8][8]; // ?????§ 35

int main() {
    fill_n((char *)G, 8*8*8*8*8*8*8*8, -1);
    G[0][1][2][3][4][5][6][7] = 0;
    queue<P> que;
    vi init(8);
    REP(i, 8) init[i] = i;
    que.push({0, init});
    while (!que.empty()) {
        P p = que.front(); que.pop();
        REP(i, 8) {
            if (p.c[i] != 0) continue;
            REP(j, 4) {
                int xy = i + dxdy[j];
                if (!(i == 3 && xy == 4) && !(i == 4 && xy == 3) && 0 <= xy && xy < 8) {
                    swap(p.c[i], p.c[xy]);
                    if (G[p.c[0]][p.c[1]][p.c[2]][p.c[3]][p.c[4]][p.c[5]][p.c[6]][p.c[7]] == -1) {
                        G[p.c[0]][p.c[1]][p.c[2]][p.c[3]][p.c[4]][p.c[5]][p.c[6]][p.c[7]] = p.cnt+1;
                        que.push({p.cnt+1, p.c});
                    }
                    swap(p.c[i], p.c[xy]);
                }
            }
        }
    }

    int a,b,c,d,e,f,g,h;
    while (cin >>a>>b>>c>>d>>e>>f>>g>>h) {
        printf("%d\n", G[a][b][c][d][e][f][g][h]);
    }
}