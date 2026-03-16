#include<iostream>
#include<cstring>
using namespace std;

int dp[1001];
int w[1001],d[1001];

int main(void){
	int W;
	int N;
	int k=1;
	while(1){
		scanf("%d",&W);
		if(W==0)break;
		memset(dp,0,sizeof(dp));
		memset(w,0,sizeof(w));
		memset(d,0,sizeof(d));
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			scanf("%d,%d",&d[i],&w[i]);
		}
		for(int i=0;i<N;i++){
			for(int j=W;j>=0;j--){
				if(j>=w[i]){
					dp[j]=max(dp[j],dp[j-w[i]]+d[i]);
				}
			}
		}
		int aw=0,ad=0;
		for(int j=0;j<=W;j++){
			if(ad<dp[j]){
				aw=j;
				ad=dp[j];
			}
		}
		printf("Case %d:\n",k);
		printf("%d\n",ad);
		printf("%d\n",aw);
		k++;
	}
    return 0;
}