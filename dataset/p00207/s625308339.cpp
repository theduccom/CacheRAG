#include<stdio.h>
#include<queue>
#include<algorithm>
using namespace std;
int f[200][200];
int v[200][200];
int dx[]={0,-1,0,1};
int dy[]={1,0,-1,0};
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b),a){
		int xs,ys,xg,yg;
		scanf("%d%d%d%d",&xs,&ys,&xg,&yg);
		xs--;ys--;xg--;yg--;
		int n;
		scanf("%d",&n);
		for(int i=0;i<200;i++)
			for(int j=0;j<200;j++)
				f[i][j]=v[i][j]=0;
		for(int i=0;i<n;i++){
			int p,q,r,s;scanf("%d%d%d%d",&p,&q,&r,&s);
			r--;s--;
			if(q==0){
				for(int j=0;j<4;j++)
					for(int k=0;k<2;k++)
						f[r+j][s+k]=p;
			}else{
				for(int j=0;j<2;j++)
					for(int k=0;k<4;k++)
						f[r+j][s+k]=p;
			}
		}
		if(f[xs][ys]!=f[xg][yg]||!f[xs][ys]){
			printf("NG\n");
			continue;
		}
		queue<pair<int,int> >Q;
		v[xs][ys]=1;
		Q.push(make_pair(xs,ys));
		while(Q.size()){
			int row=Q.front().first;
			int col=Q.front().second;
			Q.pop();
			for(int i=0;i<4;i++){
				if(0<=row+dx[i]&&row+dx[i]<a&&0<=col+dy[i]&&col+dy[i]<b&&!v[row+dx[i]][col+dy[i]]&&f[row+dx[i]][col+dy[i]]==f[row][col]){
					v[row+dx[i]][col+dy[i]]=1;
					Q.push(make_pair(row+dx[i],col+dy[i]));
				}
			}
		}
		if(v[xg][yg])printf("OK\n");
		else printf("NG\n");
	}
}