#include <cstdio>
#include <cstring>

bool dp[1000001];
bool pm[1000001];

int main() {
	int n,x,v[30];
	pm[0]=pm[1]=true;
	for(int i=2;i<=1000000;i++) {
		if(!pm[i]) for(int j=2;i*j<=1000000;j++) pm[i*j]=true;
	}
	while(scanf("%d %d",&n,&x),n||x) {
		for(int i=0;i<n;i++) {
			scanf("%d",&v[i]);
		}
		memset(dp,0,sizeof(dp));
		dp[0]=true;
		for(int i=1;i<=x;i++) {
			for(int j=0;j<n;j++) {
				if(i-v[j]>=0&&dp[i-v[j]]) {
					dp[i]=true;break;
				}
			}
		}
		int ans=-1;
		for(int i=x;i>=2;i--) {
			if(dp[i]&&!pm[i]) {ans=i;break;}
		}
		if(ans!=-1) printf("%d\n",ans); else printf("NA\n");
	}
}