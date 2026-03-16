#include<stdio.h>
int main()
{
	int a,b,c,d=0;
	while(1){
	
		c=1;
		scanf("%d%d",&a,&b);
		if(a==0&&b==0){
			break;
		}
		if(d){
				printf("\n");
		}
		for(int i=a;i<=b;i++){
			if(i%4==0&&(i%100!=0||i%400==0)){
				printf("%d\n",i);
				c=0;
			}
		}
		if(c){
			printf("NA\n");
		}
		d=1;
	}
	return 0;
}