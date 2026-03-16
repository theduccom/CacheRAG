#include<stdio.h>

int main(void){
	int n;
	while(scanf("%d", &n),n){
		int a[10] ={0};
		int t;
		
		for(int i = 0; i < n; i++){
			scanf("%d", &t);
			a[t]++;
		}
		
		for(int i = 0; i < 10; i++){
			if(a[i]==0){
				puts("-");
			}else{
				for(int j = 0; j < a[i]; j++){
					printf("*");
				}puts("");
			}
		}
	}
	return 0;
}