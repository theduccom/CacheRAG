#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#define lol(i,n) for(int i=0;i<n;i++)
#define mod 1000000007
typedef long long ll;
using namespace std;
int c[110][110];
bool vis[110][110];
int h,w,n,x1,y1,x2,y2;
void DFS(int y,int x){
	vis[y][x]=true;
	int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
	lol(i,4){
		int xx=x+dx[i],yy=y+dy[i];
		if(xx<0||yy<0||xx==w||yy==h)continue;
		if(c[y][x]==c[yy][xx]&&!vis[yy][xx])DFS(yy,xx);
	}
}
int main(){
	while(cin>>w>>h&&w+h){
		cin>>x1>>y1>>x2>>y2>>n;
		x1--,x2--,y1--,y2--;
		lol(i,h)lol(j,w)c[i][j]=0,vis[i][j]=false;
		lol(i,n){
			int x,y,a,b;
			cin>>a>>b>>x>>y;x--,y--;
			int xx=2,yy=4;if(b==0)xx=4,yy=2;
			lol(j,yy)lol(k,xx){
				c[j+y][k+x]=a;
			}
		}
		DFS(y1,x1);
		if(vis[y2][x2]==true)cout<<"OK"<<endl;
		else cout<<"NG"<<endl;
	}
	return 0;
}