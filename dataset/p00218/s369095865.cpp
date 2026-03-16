#include<stdio.h>

int main(){
	while(1){
		int n,m,e,j;
		int i;
		scanf("%d",&n);
		if(n==0)return 0;
		for(i=0;i<n;i++){
			scanf("%d %d %d",&m,&e,&j);
			if((m==100||e==100||j==100)||m+e>=180||m+e+j>=240)printf("A\n");
			else if(m+e+j>=210||(m+e+j>=150&&(m>=80||e>=80)))printf("B\n");
			else printf("C\n");
		}
	}
}

		