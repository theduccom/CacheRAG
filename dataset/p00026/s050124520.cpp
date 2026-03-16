#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <complex>
#include <cstdio>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<int(b); i++)
#define rep(i,b) loop(i,0,b)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef complex<double> vec;

double cross(const vec& a, const vec& b) {
    return imag(conj(a)*b);
}

int dx1[] = {1,0,0,-1}; // tateyoko
int dy1[] = {0,1,-1,0};
int dx2[] = {1,1,-1,-1}; // naname
int dy2[] = {-1,1,-1,1};
inline bool in(int x, int y){
    return 0<=x && 0<=y && x<10 && y<10;
}

int main(){
    vvi g(10,vi(10));
    int x,y,s;
    while(scanf("%d,%d,%d", &x,&y,&s)!=EOF){
        g[y][x]++;
        if(s==3){
            rep(d,4){
                for(int t=1; t<=2; t++){
                    int px=x+dx1[d]*t;
                    int py=y+dy1[d]*t;
                    if(in(px,py)) g[py][px]++;
                }
                int px=x+dx2[d];
                int py=y+dy2[d];
                if(in(px,py)) g[py][px]++;
            }
        }else if(s==2){
            rep(d,4){
                int px=x+dx1[d];
                int py=y+dy1[d];
                if(in(px,py)) g[py][px]++;
                px=x+dx2[d];
                py=y+dy2[d];
                if(in(px,py)) g[py][px]++;

            }
        }else if(s==1){
            rep(d,4){
                for(int t=1; t<=1; t++){
                    int px=x+dx1[d]*t;
                    int py=y+dy1[d]*t;
                    if(in(px,py)) g[py][px]++;
                }
            }
        }
    }
    int z=0;
    int ans=-1;
    rep(i,10)rep(j,10){
        if(g[i][j]==0)z++;
        ans=max(ans,g[i][j]);
    }
    cout << z << "\n" << ans << endl;
}