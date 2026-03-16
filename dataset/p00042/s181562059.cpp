#include <stdio.h>

int main(){
	int price[1000],weight[1000];
	int weight_MAX;
	int treasure;
	int i,j;
	int ans_p,ans_w,time;
	int dp[10000];

	time = 1;

	scanf("%d",&weight_MAX);

	while(weight_MAX != 0){

		scanf("%d",&treasure);

		for(i = 0; i < treasure; i++){
			scanf("%d,%d",&price[i],&weight[i]);
		}

		for(i = 0; i <= weight_MAX + 1; i++){
			dp[i] = 0;
		}

		for(i = 0; i < treasure; i++){
			for(j = weight_MAX; j >= weight[i]; j--){
				if(dp[j - weight[i]] + price[i] > dp[j]){
					dp[j] = dp[j - weight[i]] + price[i];
				}
			}
		}

		ans_p = 0;
		ans_w = 0;
		
		for(i = 0;i <= weight_MAX; i++){
			if(ans_p < dp[i]){
				ans_p = dp[i];
				ans_w = i;
			}
		}
		printf("Case %d:\n%d\n%d\n",time,ans_p,ans_w);

		time++;

		scanf("%d",&weight_MAX);
	}
	return 0;
}