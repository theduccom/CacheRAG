#include <cstdio>
#include <cstring>
bool dp[1000001],prime[1000001];
int main() {
	for(int i=2;i*i<=1000000;i++) {
		if(!prime[i]) for(int j=i*2;j<=1000000;j+=i) prime[j]=true;
	}
	int n,x,cook[30];
	while(scanf("%d %d",&n,&x),n) {
		memset(dp,0,sizeof(dp));
		for(int i=0;i<n;i++) {
			scanf("%d",&cook[i]);
		}
		dp[0]=true;
		for(int i=0;i<n;i++) {
			for(int j=1;j<=x;j++) {
				if(j>=cook[i]) dp[j]|=dp[j-cook[i]];
			}
		}
		bool NA=true;
		for(int i=x;i>0;i--) {
			if(!prime[i]&&dp[i]) {
				NA=false;
				printf("%d\n",i);
				break;
			}
		}
		if(NA) printf("NA\n");
	}
}