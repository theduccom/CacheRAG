#include<stdio.h>
#include<string.h>
int main(void)
{
	int a,s,d,f,g,h,i,j;
	scanf("%d %d %d",&a,&s,&d);
	if(a==1&&s==1||d==1){
		printf("Open\n");
	}
	else{
		printf("Close\n");
	}
	return 0;
}