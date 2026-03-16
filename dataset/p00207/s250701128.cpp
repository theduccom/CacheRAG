#include <cstdio>
#include <cstring>
using namespace std;

int  map[100][100];
bool visited[100][100];
int  w,h;
int  xs,ys;
int  xg,yg;
int  n;

int dfs(int x,int y) {
	static int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
	if(x==xg&&y==yg) return 1;
	visited[x][y]=true;
	for(int i=0;i<4;i++) {
		int nx=x+dx[i],ny=y+dy[i];
		if(0<=nx&&nx<w&&0<=ny&&ny<h&&map[x][y]==map[nx][ny]&&!visited[nx][ny]) {
			if(dfs(nx,ny)) return 1;
		}
	}
	return 0;
}

int main() {
	int c,d,x,y;

	while(1) {
		memset(map,0,sizeof(map));
		memset(visited,0,sizeof(visited));
		scanf("%d %d",&w,&h);
		if(w==0&&h==0) break;
		scanf("%d %d",&xs,&ys);xs--;ys--;
		scanf("%d %d",&xg,&yg);xg--;yg--;
		scanf("%d",&n);
		for(int i=0;i<n;i++) {
			scanf("%d %d %d %d",&c,&d,&x,&y);x--;y--;
			int X,Y;
			if(d==1) {
				X=2;Y=4;
			}else {
				X=4;Y=2;
			}
			for(int j=0;j<X;j++) {
				for(int k=0;k<Y;k++) {
					map[x+j][y+k]=c;
				}
			}
		}
		printf("%s\n",dfs(xs,ys)?"OK":"NG");
	}
}