#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<set>

using namespace std;

#define rep(i,n) for(int i=0;i<int(n);i++)
#define reps(i,n) for(int i=1;i<=int(n);i++)

int main(){
	while(1){
		int n,m;
		
		cin>>n>>m;
		if(n==0)break;
		
		
		int froid[111][111][2];
		rep(i,111)rep(j,111)rep(k,2)froid[i][j][k]=1010000000;
		
		
		rep(i,n){
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			
			froid[a][b][0]=c;
			froid[b][a][0]=c;
			froid[a][b][1]=d;
			froid[b][a][1]=d;
			
		}
		
		rep(p,2){
			reps(k,m){
				reps(i,m){
					reps(j,m){
						froid[i][j][p] = min(froid[i][j][p],froid[i][k][p]+froid[k][j][p]);
					}
				}
			}
		}
		
		int k;
		cin>>k;
		
		rep(i,k){
			int a,b,c;
			cin>>a>>b>>c;
			
			printf("%d\n",froid[a][b][c]);
		}
	}
}