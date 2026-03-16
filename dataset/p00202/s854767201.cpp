#include<iostream>
#include<cstring>

using namespace std;

bool prime[1000001];
bool dp[1000001];
int menu[31];
void seive(int s){
	for(int i=0;i<=s;i++)prime[i]=true;
	prime[0]=prime[1]=false;
	for(int i=2;i<=s;i++){
		if(prime[2]==true){
			for(int j=i*2;j<=s;j+=i){
				prime[j]=false;
			}
		}
	}
}

int main(void){
	seive(1000000);
	int n,x;
	while(1){
		int max=0;
		memset(dp,false,sizeof(dp));
		scanf("%d%d",&n,&x);
		if(n==0 && x==0)break;
		for(int i=0;i<n;i++){
			scanf("%d",&menu[i]);
		}
		dp[0]=true;
		for(int i=0;i<n;i++){
			for(int j=menu[i];j<=x;j++){
				if(dp[j-menu[i]]==true)dp[j]=true;
			}
		}
		for(int i=0;i<=x;i++){
			if(dp[i]==true && prime[i]==true)max=i;
		}
		if(max>0)printf("%d\n",max);
		else printf("NA\n");
	}
    return 0;
}