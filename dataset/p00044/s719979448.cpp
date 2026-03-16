#include <stdio.h>
#include <cmath>
#include <algorithm>

#define NUM 60000

int main(){
	int table[NUM],limit;

	for(int i=0; i < NUM;i++)table[i] = 1;
	table[0] = 0;

	limit = sqrt(NUM);

	for(int i=2;i<=limit;i++){
		if(table[i] == 1){
			for(int k=2*i;k < NUM; k += i){
				table[k] = 0;
			}
		}
	}

	int n;

	while(scanf("%d",&n)!=EOF){
		for(int k=n-1;k>=0;k--){
			if(table[k] == 1){
				printf("%d ",k);
				break;
			}
		}
		for(int k=n+1;k<NUM;k++){
			if(table[k] == 1){
				printf("%d\n",k);
				break;
			}
		}
	}
	return 0;
}