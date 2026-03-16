#include <cstdio>
#include <cstring>
int dx[]={1,0,-1,0},dy[]={0,1,0,-1};
int M[100][100];
bool vst[100][100];
int w,h,xs,ys,xg,yg,n;
bool dfs(int x,int y) {
	if(x==xg&&y==yg) return true;
	vst[x][y]=true;
	for(int i=0;i<4;i++) {
		int nx=x+dx[i],ny=y+dy[i];
		if(0>nx||nx>=w||0>ny||ny>=h)continue;
		if(M[x][y]!=M[nx][ny])continue;
		if(vst[nx][ny])continue;
		if(dfs(nx,ny))return true;
	}
	return false;
}
int main() {
	while(scanf("%d %d",&w,&h),w) {
		memset(vst,0,sizeof(vst));
		memset(M,0,sizeof(M));
		scanf("%d %d",&xs,&ys);xs--;ys--;
		scanf("%d %d",&xg,&yg);xg--;yg--;
		scanf("%d",&n);
		for(int i=0;i<n;i++) {
			int c,d,x,y;
			scanf("%d %d %d %d",&c,&d,&x,&y);x--;y--;
			if(d==1) {
				for(int j=0;j<4;j++)
					for(int k=0;k<2;k++)
						M[x+k][y+j]=c;
			}else {
				for(int j=0;j<2;j++)
					for(int k=0;k<4;k++) 
						M[x+k][y+j]=c;
			}
		}
		printf("%s\n",dfs(xs,ys)?"OK":"NG");
	}
}