#include<iostream>
#define rep(i,n) for(int i=0;i<n;i++)
#define ck(a,b) 0<a&&a<=b
using namespace std;
int dy[]={-1,0,1,0},dx[]={0,-1,0,1};
int w,h,xs,ys,xg,yg,n,c,d,x,y,f[101][101];
bool dfs(int y,int x){
	f[y][x]=0;
	if(y==yg&&x==xg)return 1;
	bool r=0;
	rep(d,4){
		int ny=y+dy[d],nx=x+dx[d];
		if(ck(ny,h)&&ck(nx,w)&&f[ny][nx]==c)r=r||dfs(ny,nx);
	}
	return r;
}
int main(){
	while(cin>>w>>h,w){
		rep(i,h)rep(j,w)f[i+1][j+1]=0;
		cin>>xs>>ys>>xg>>yg>>n;
		rep(i,n){
			cin>>c>>d>>x>>y;
			rep(j,(d?2:4))rep(k,(d?4:2))f[y+k][x+j]=c;
		}
		c=f[ys][xs];
		cout<<(c>0&&dfs(ys,xs)?"OK":"NG")<<endl;
	}
	return 0;
}