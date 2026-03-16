#include<stdio.h>
int main(void)
{
	int i,a,b,w,x,flg,cnt;
	cnt=0;
	scanf("%d %d",&a,&b);
	while(a!=0 && b!=0){
		flg=0;
		if(cnt!=0){
			printf("\n");
		}
		for(i=a;i<=b;i++){
			if(i%4==0 && i%100!=0){
			//	if(i%100!=0){
					printf("%d\n",i);
					flg=1;
				//}
			}
			else if(i%400==0){
				printf("%d\n",i);
				flg=1;
			}
			cnt++;
		}
		if(flg==0){
			printf("NA\n");
		}
		scanf("%d %d",&a,&b);
	}
	return 0;
}