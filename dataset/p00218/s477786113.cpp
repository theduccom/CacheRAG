#include<stdio.h>
int main(void)
{
	int n,m,e,j,i,cls[10000],flg;
	while(1){
		scanf("%d",&n);
		if(n<1)break;
		for(i=0;i<n;i++){
			flg=0;
			scanf("%d %d %d",&m,&e,&j);
			if(m==100||e==100||j==100){
				cls[i]=1;
			}
			else if(m+e>=90*2){
				cls[i]=1;
			}
			else if(m+e+j>=80*3){
				cls[i]=1;
			}
			else if(m+e+j>=70*3){
				cls[i]=2;
			}
			else if(m+e+j>=50*3&&(m>=80||e>=80)){
				cls[i]=2;
			}
			else if(flg<1){
				cls[i]=3;
			}
		}
		for(i=0;i<n;i++){
			if(cls[i]==1){
				printf("A\n");
			}
			if(cls[i]==2){
				printf("B\n");
			}
			if(cls[i]==3){
				printf("C\n");
			}
		}
	}
	return 0;
}