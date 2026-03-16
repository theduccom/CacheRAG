#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<climits>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reg(i,a,b) for(int i=(a);i<=(b);i++)
#define irep(i,n) for(int i=((int)(n))-1;i>=0;i--)
#define ireg(i,a,b) for(int i=(b);i>=(a);i--)
typedef long long int lli;
typedef pair<int,int> mp;
#define fir first
#define sec second
#define IINF INT_MAX
#define LINF LLONG_MAX


int map[150][150]={};
int gone[150][150]={};

int gx,gy;
int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};

bool dfs(int nx,int ny){
	if(gone[nx][ny])return false;
	gone[nx][ny]=1;
	if(nx == gx && ny == gy)return true;
	bool res = false;
	rep(i,4){
		int tx = nx+dx[i],ty=ny+dy[i];
		if(map[tx][ty]!=map[nx][ny])continue;
		res |= dfs(tx,ty);
	}
	return res;
}

int main(void){
	while(1){
		int w,h;
		scanf("%d%d",&w,&h);
		if(w==0 && h==0)break;
		int sx,sy,n;
		scanf("%d%d%d%d%d",&sx,&sy,&gx,&gy,&n);
		memset(map,0,sizeof(map));
		memset(gone,0,sizeof(gone));
		rep(i,n){
			int c,d,nx,ny;
			scanf("%d%d%d%d",&c,&d,&nx,&ny);
			int fx=2,fy=4;
			if(d==0)swap(fx,fy);
			rep(x,fx)rep(y,fy){
				map[x+nx][y+ny]=c;
			}
		}
		/*
		rep(y,20)rep(x,20){
			printf("%d%c",map[x][y],x==19?'\n':' ');
		}*/
		if(map[sx][sy]!=0 && dfs(sx,sy))printf("OK\n");
		else printf("NG\n");
	}
		
	return 0;
}