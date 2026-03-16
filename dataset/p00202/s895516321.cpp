#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<queue>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define reps(i,n) for(int i=1;i<=n;i++)

int canmake[1100000];
int sosu[1100000];

int main(){
	while(1){
		int n,m;
		cin>>n>>m;
		
		if(n==0 && m==0)break;
		
		rep(i,1100000)canmake[i]=sosu[i]=0;
		
		
		sosu[0]=sosu[1]=1;
		for(int i=2;i<=1000000;i++){
			if(sosu[i]==1)continue;
			for(int j=i*2;j<1000000;j+=i){
				sosu[j]=1;
			}
		}
		
		
		canmake[0]=1;
		
		int sina[100];
		rep(i,n)cin>>sina[i];
		for(int i=0;i<1000000;i++){
			if(canmake[i]==0)continue;
			rep(j,n){
				if(i+sina[j]<=1000000){
					canmake[i+sina[j]]=1;
				}
			}
		}
		
		
		int ans=-1;
		for(int i=m;i>=0;i--){
			if(sosu[i] == 0 && canmake[i]==1){
				ans =i;
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