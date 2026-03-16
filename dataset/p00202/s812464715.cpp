#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

int main(){
	bool sosuu[1000011];
	bool dp[1000011];
	
	while(1){
		for(int i=0;i<=1000000;i++){
			sosuu[i]=0;
			dp[i]=0;
		}
		for(int i=2;i<=500000;i++){
			if(sosuu[i]==0){
				for(int j=i;j<=1000000;j+=i){
					sosuu[j]=1;
				}
				sosuu[i]=0;
			}
		}
		sosuu[0]=1;
		sosuu[1]=1;
		
		int item[30];
		
		int n,m;
		scanf("%d%d",&n,&m);
		
		if(n==0 && m==0){
			break;
		}
		for(int i=0;i<n;i++){
			scanf("%d",&item[i]);
		}
		dp[0]=1;
		for(int i=0;i<=m;i++){
			for(int j=0;j<n;j++){
				if(i<item[j]){
					continue;
				}
				if(dp[i-item[j]]==1){
					dp[i]=1;
				}
			}
		}
		int num=0;
		for(int i=m;i>=0;i--){
			if(dp[i]==1&&sosuu[i]==0){
				num=i;
				break;
			}
		}
		if(num==0){
			puts("NA");
		}else{
			printf("%d\n",num);
		}
	}
}