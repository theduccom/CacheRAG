#include<stdio.h>

bool prime[1000001];
bool money[1000001];
int mono[31];
int n,x;

void func(int now){
	for(int i = 0; i < n; i++){
		if(now+mono[i] <= x){
			money[now+mono[i]] = 1;
		}
	}
}

int main(void){
	prime[0] = prime[1] = 1;
	for(int i = 2; i < 1000000; i++){
		if(prime[i])continue;
		for(int j = i * 2; j < 1000000; j+=i){
			prime[j] = 1;
		}
	}
	while(scanf("%d%d", &n, &x) && n && x){
		int ans = -1; 
		for(int i = 0; i < n; i++){
			scanf("%d", &mono[i]);
		}
		money[0] = 1;
		for(int i = 0; i <= x; i++){
			if(money[i])func(i);
		}
		for(int i = x; i >= 0; i--){
			if(!prime[i] && money[i]){
				ans = i;
				break;
			}
		}
		if(ans == -1){
			puts("NA");
		}else {
			printf("%d\n",ans);
		}
		
		/*ツ渉可甘コツ可サ*/
		for(int i = 0; i < 1000001; i++){
			money[i] = 0;
		}
		for(int i = 0; i < 31; i++){
			mono[i] = 0;
		}
	}
}