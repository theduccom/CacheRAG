#include<stdio.h>
int main(void)
{
	int a,b,i,c,cnt;
	cnt=0;
	scanf("%d %d",&a,&b);
	while(a!=0&&b!=0){
		c=0;
		for(i=a;i<=b;i++){
			if(i%4==0 && i%100!=0){
				cnt++;
				printf("%d\n",i);
				c=1;
			}
			else if(i%400==0){
				cnt++;
				printf("%d\n",i);
				c=1;
			}
		}
		if(c==0){
			printf("NA\n");
		}
		
		scanf("%d %d",&a,&b);
		if(cnt>=0 && a!=0 && b!=0){
			printf("\n");
		}
	}
	return 0;
}