#include<stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==1&&b==1&&c==0){
		printf("Open\n");
	}
	else if(a==0&&b==0&&c==1){
		printf("Open\n");
	}
	else{
		printf("Close\n");
	}
}
