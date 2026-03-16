#include<stdio.h>
int main(void)
{
	int a,s,d;
	scanf("%d %d %d",&a,&s,&d);
	if(a<1 && s<1 && d>0){
		printf("Open\n");
	}
	else if(a>0 && s>0 && d<1){
		printf("Open\n");
	}
	else{
		printf("Close\n");
	}
	
	return 0;
}