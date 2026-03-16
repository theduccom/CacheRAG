#include<stdio.h>

int main(void){
	
	int n;
	while(scanf("%d", &n) && n){
		int s = 5,go = 0;
		while(1){
			if(s>n)break;
			go += n/s;
			s *= 5;
		}
		
		printf("%d\n",go);
		
	}
	return 0;
}