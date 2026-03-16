#include <stdio.h>
#include <cmath>
#include <algorithm>

#define NUM 51000

int main(){
	int table[NUM],limit;

	for(int i=0; i < NUM;i++)table[i] = 1;
	table[0] = 0;
	table[1] = 0;

	limit = sqrt(NUM);

	for(int i=2;i<=limit;i++){
		if(table[i] == 1){
			for(int k=2*i;k < NUM; k += i){
				table[k] = 0;
			}
		}
	}

	int n,count;

	while(true){
		scanf("%d",&n);
		if(n == 0)break;

		count = 0;
		for(int i=2; i<= (n+1)/2; i++){
			if(i <= n-i &&  table[i] == 1 && table[n-i] == 1)count++;
		}
		printf("%d\n",count);
	}
	return 0;
}