#include<bits/stdc++.h>
#define P pair<int,int>
using namespace std;

int dx[]={0,0,0,0,1,1,1,1};
int dy[]={0,1,2,3,0,1,2,3};
int fx[]={-1,0,0,1};
int fy[]={0,-1,1,0};
signed main(){
	int a,b;
	while(cin>>a>>b,a||b){
		int c,d,e,f,g;
	scanf("%d%d%d%d%d",&c,&d,&e,&f,&g);
	c--;d--;e--;f--;
	char h[100][100]{};
	for(int i=0;i<g;i++){
		int j,k,l,m;
		scanf("%d%d%d%d",&j,&k,&l,&m);
		l--;m--;
		if(k){
			for(int n=0;n<8;n++)h[l+dx[n]][m+dy[n]]=j;
		}
		else{
			for(int n=0;n<8;n++)h[l+dy[n]][m+dx[n]]=j;
		}
	}
	queue<P>Q;
	int s[100][100];
for(int ss=0;ss<a;ss++){
	for(int qq=0;qq<b;qq++)s[ss][qq]=-1;
}
	s[c][d]=0;
	Q.push(P(c,d));
	while(Q.size()){
		P w=Q.front();
		Q.pop();
		if(w==P(e,f)){break;}
		for(int z=0;z<4;z++){
			int lx=(w).first+fx[z];
			int ly=(w).second+fy[z];
			if(lx>=0&&lx<a&&ly>=0&&ly<b&&h[lx][ly]==h[c][d]&&s[lx][ly]==-1){
				s[lx][ly]=s[(w).first][(w).second]+1;
				Q.push(P(lx,ly));
			}
		}
	}
if(s[e][f]!=-1)printf("OK\n");
else printf("NG\n");
	}
}