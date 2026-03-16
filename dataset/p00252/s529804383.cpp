#include<stdio.h>
int main(void)
{
	int d1, d2, d3;
	scanf("%d %d %d",&d1,&d2,&d3);

	if(d1==1&&d2==1&&d3==0){
		printf("Open\n");
	}
	if(d1==0&&d2==0&&d3==1){
		printf("Open\n");
	}
	if(d1==1&&d2==0&&d3==0){
		printf("Close\n");
	}
	if(d1==0&&d2==1&&d3==0){
		printf("Close\n");
	}
	if(d1==0&&d2==0&&d3==0){
		printf("Close\n");
	}
	return 0;
	
}