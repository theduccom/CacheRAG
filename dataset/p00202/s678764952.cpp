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


char sosu[1000001];
char can[1000001];

int main(){
	rep(i,1000001){
		sosu[i]=0;
	}
	
	sosu[0]=1;
	sosu[1]=1;
	
	rep(i,1000001){
		if(sosu[i]==1)continue;
		for(int j=i+i;j<1000001;j+=i){
			sosu[j]=1;
		}
	}
	
	while(1){
		int n,m;
		sintt(n,m);
		if(n==0)break;
		
		rep(i,1000001){
			can[i]=0;
		}
		
		int sina[31];
		rep(i,n){
			sint(sina[i]);
		}
		
		can[0]=1;
		reps(i,m){
			rep(j,n){
				if(i-sina[j]<0){
					continue;
				}
				if(can[i-sina[j]]==1){
					can[i]=1;
				}
			}
		}
		
		int ans=-1;
		for(int i=m;i>=0;i--){
			if(!sosu[i]&can[i]==1){
				ans=i;
				break;
			}
		}
		
		if(ans==-1){
			puts("NA");
		}else{
			printf("%d\n",ans);
		}
	}
}