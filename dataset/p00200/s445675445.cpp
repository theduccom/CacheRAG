#include<cstdio>
#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<set>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define reps(i,n) for(int i=1;i<=n;i++)

int main(){
	while(1){
		int m,n;
		cin>>m>>n;
		if(m==0)break;
		
		int dp[2][111][111];
		
		rep(p,2){
			rep(i,111){
				rep(j,111){
					dp[p][i][j]=1000000000;
				}
			}
			rep(i,111)dp[p][i][i]=0;
		}
		
		rep(i,m){
			int a,b,c,t;
			cin>>a>>b>>c>>t;
			
			a--;b--;
			
			dp[0][a][b]=c;
			dp[0][b][a]=c;
			
			dp[1][a][b]=t;
			dp[1][b][a]=t;
		}
		
		rep(p,2){
			rep(k,n){
				rep(i,n){
					rep(j,n){
						dp[p][i][j] = min(dp[p][i][j],dp[p][i][k]+dp[p][k][j]);
					}
				}
			}
		}
		
		int T;
		cin>>T;
		rep(i,T){
			int a,b,c;
			cin>>a>>b>>c;
			printf("%d\n",dp[c][a-1][b-1]);
		}
	}
}