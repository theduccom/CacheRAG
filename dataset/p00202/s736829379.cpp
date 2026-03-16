#include<cstdio>
#include<iostream>
#include<algorithm>

#define MAX 1000001

using namespace std;

int main(){
	
	char sosu[MAX]={0};
	sosu[0]=1;
	sosu[1]=1;
	for(int i=2;i<MAX;i++){
		if(sosu[i]==0){
			for(int j=i+i;j<MAX;j+=i){
				sosu[j]=1;
			}
		}
	}
	while(1){
		int n,m;
		scanf("%d%d",&n,&m);
		if(n==0 && m==0){
			break;
		}
		int item[30];
		for(int i=0;i<n;i++){
			scanf("%d",&item[i]);
		}
		bool dp[MAX]={0};
		for(int i=0;i<MAX;i++){
			dp[i]=0;
		}
		dp[0]=1;
		for(int i=0;i<=m;i++){
			for(int j=0;j<n;j++){
				if(item[j]<=i){
					if(dp[i-item[j]]==1){
						dp[i]=1;
						break;
					}
				}
			}
		}
		
		
		for(int i=m;;i--){
			if(i==0){
				printf("NA\n");
				break;
			}
			if(dp[i]==1 && sosu[i]==0){
				printf("%d\n",i);
				break;
			}
		}
	}
}