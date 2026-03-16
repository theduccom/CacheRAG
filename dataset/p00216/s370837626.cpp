#include<stdio.h>
int main(void)
{
	int w,sum,i;
	while(1){
		scanf("%d",&w);
		if(w==-1) break;
		sum=3130;
		for(i=11;i<=w;i++){
			if(i<=20) sum-=125;
			else if(i<=30) sum-=140;
			else sum-=160;
		}
		printf("%d\n",sum);
	}
	return 0;
}