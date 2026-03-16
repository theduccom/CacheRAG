#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
#include<algorithm>

#define INF 1010000000
#define rep(i,n) for(int i=0;i<n;i++)
#define reps(i,n) for(int i=1;i<=n;i++)
#define sint(i) scanf("%d",&i);
#define sintt(i,j) scanf("%d%d",&i,&j);
#define sinttt(i,j,k) scanf("%d%d%d",&i,&j,&k);

using namespace std;


int main(){
	while(1){
		int n,m;
		sintt(m,n);
		if(n==0)break;
		int fro[101][101][2];
		rep(i,101)rep(j,101)fro[i][j][0]=fro[i][j][1]=INF;
		
		rep(i,m){
			int a,b,c,d;
			sintt(a,b);
			sintt(c,d);
			
			fro[a][b][0]=fro[b][a][0]=c;
			fro[a][b][1]=fro[b][a][1]=d;
		}
		
		
		reps(k,n){
			reps(i,n){
				reps(j,n){
					fro[i][j][0]=min(fro[i][j][0],fro[i][k][0]+fro[k][j][0]);
					fro[i][j][1]=min(fro[i][j][1],fro[i][k][1]+fro[k][j][1]);
				}
			}
		}
		
		int t;
		sint(t);
		
		rep(i,t){
			int a,b,c;
			sinttt(a,b,c);
			
			printf("%d\n",fro[a][b][c]);
		}
	}
}