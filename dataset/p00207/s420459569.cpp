#include<iostream>
#include<string>
#include<algorithm>
#include<list>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<numeric>
#include<vector>
#include<cstdio>
#include<climits>
#include<cfloat>
#include<cstring>
#define foreach(t,p,it) for(t::iterator it=p.begin(),it!=p.end(),++it)
#define all(p) p.begin(),p.end()
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
using namespace std;

const int W=210,H = 210;
int block[W][H];
int ans;

int w,h,xs,ys,xg,yg,n,c,d,x,y;
void solve(int xi,int yi)
{
    if(xi==xg && yi==yg && block[xi][yi]==c){ ans = 1; return;}
    if(block[xi][yi] == 0) return;

    if(block[xi][yi] == c)
    {
        block[xi][yi] = 0;
        solve(xi-1, yi);
        solve(xi, yi-1);
        solve(xi+1, yi);
        solve(xi, yi+1);
    }
    block[xi][yi] = 0;
    return;
}

int main()
{
    while(cin >> w >> h )
    {
        memset(block,0,sizeof(int)*W*H);
        if(w==0 && h==0) break;
        ans = 0;
        cin >> xs >> ys;
        cin >> xg >> yg;
        cin >> n;
        REP(n)
        {
            cin >> c >> d >> x >> y;
            if(d == 1) //tate
            {
                block[x][y] = c;
                block[x][y+1] =c;
                block[x][y+2] = c;
                block[x][y+3] = c;
                block[x+1][y] = c;
                block[x+1][y+1] = c;
                block[x+1][y+2] = c;
                block[x+1][y+3] = c;
            }
            else
            {
                block[x][y] = c;
                block[x+1][y] = c;
                block[x+2][y] = c;
                block[x+3][y] = c;
                block[x][y+1] = c;
                block[x+1][y+1] = c;
                block[x+2][y+1] = c;
                block[x+3][y+1] = c;
            }
        }
        /*rep(j,h)
        {
            rep(i,w) cout << block[i+1][j+1] << " " ;
            cout << endl;
        }*/

        c = block[xs][ys];
        //cout << c  << " goal" << block[xg][yg]<< endl;
        solve(xs,ys);

        if(ans) cout << "OK" << endl;
        else cout << "NG" << endl;
    }

    return 0;
}