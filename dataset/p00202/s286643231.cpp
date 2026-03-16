#include <cstdio>

#define MAX 1000001
int n,x,v;
bool prm[MAX]={false};
bool dp[MAX]={false};

int main(){
	for(int i = 2; i < MAX; i++){
		if(!prm[i]){
			for(int j = i*2; j < MAX; j += i){
				prm[j] = true;
			}
		}
	}
	while(scanf("%d%d",&n,&x), n != 0){
		for(int i = 0; i < MAX; i++){
			dp[i] = false;
		}
		dp[0] = true;
		for(int i = 0; i < n; i++){
			scanf("%d",&v);
			for(int j = 0; j <= x; j++){
				if(dp[j] && j + v <= x){
					dp[j+v] = true;
				}
			}
		}
		
		bool no = true;
		for(int i = x; i > 0; i--){
			if(!prm[i] && dp[i]){
				printf("%d\n",i);
				no = false;
				break;
			}
		}
		if(no){
			printf("NA\n");
		}
	}
	return 0;
}