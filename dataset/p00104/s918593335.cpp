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
#define foreach(t,p) for(t::iterator it=p.begin();it!=p.end();++it)
#define rforeach(t,p) for(t::reverse_iterator it=p.rbegin();it!=p.rend();++it)
#define all(p) p.begin(),p.end()
#define rep(i,n) for(int i=0;i<n;i++)
#define FOREACH(t,p,tit) for(t::iterator tit=p.begin();tit!=p.end();++tit)
using namespace std;
char tiles[110][110];

int main()
{
    int w,h;
    while(cin >> h >> w)
    {
        memset(tiles,'.',sizeof(tiles));
        if(w==0&&h==0){break;}
        rep(j,h)rep(i,w){cin >> tiles[i][j];}

        int x,y,nextx,nexty;
        x=0;
        y=0;
        int loop = 0;
        char nowtile;
        while(1)
        {
            nowtile = tiles[x][y];
            tiles[x][y] = 'x';
            if(nowtile=='x'){loop=1;break;}
            if(nowtile=='.'){break;}
            if(nowtile=='>'){x++;continue;}
            if(nowtile=='<'){x--;continue;}
            if(nowtile=='v'){y++;continue;}
            if(nowtile=='^'){y--;continue;}

        }
        if(loop){cout << "LOOP"<<endl;continue;}
        //cout <<x << " "<<y << endl;
        printf("%d %d\n",x,y);
    }

    return 0;
}