#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<string>

using namespace std;

#define rep(i,n) for(int i=0;i<int(n);i++)
#define reps(i,n) for(int i=1;i<=int(n);i++)
#define sint(i) scanf("%d",&i);
#define sintt(i,j) scanf("%d%d",&i,&j);
#define sinttt(i,j,k) scanf("%d%d%d",&i,&j,&k);
#define sintttt(i,j,k,m) scanf("%d%d%d%d",&i,&j,&k,&m);

#define INF 1010000000
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

int main(){
	while(1){
		int n,m;
		int time[101][101];
		int cost[101][101];
		
		rep(i,101)rep(j,101)time[i][j]=cost[i][j]=INF;
		
		sintt(n,m);
		if(n==0)break;
		rep(i,n){
			int a,b,c,d;
			sintttt(a,b,c,d);
			
			time[a][b]=d;
			time[b][a]=d;
			
			cost[a][b]=c;
			cost[b][a]=c;
		}
		
		reps(k,m){
			reps(i,m){
				reps(j,m){
					cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
					time[i][j]=min(time[i][j],time[i][k]+time[k][j]);
				}
			}
		}
		
		int q;
		sint(q);
		rep(i,q){
			int a,b,c;
			sinttt(a,b,c);
			if(c==1){
				printf("%d\n",time[a][b]);
			}else{
				printf("%d\n",cost[a][b]);
			}
		}
	}
}