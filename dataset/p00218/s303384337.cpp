#include<stdio.h>
int main(void) {
	int n;
	int i,m,e,j;
	while(1){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		for(i=0;i<n;i++){
			scanf("%d%d%d",&m,&e,&j);
			if(m==100||e==100||j==100){
				printf("A\n");
			}else if(m+e>=180){
				printf("A\n");
			}else if(m+e+j>=240){
				printf("A\n");
			}else if(m+e+j>=210){
				printf("B\n");
			}else if(m+e+j>=150&&(m>=80||e>=80)){
				printf("B\n");
			}else{
				printf("C\n");
			}
		}
	}
	return 0;
}