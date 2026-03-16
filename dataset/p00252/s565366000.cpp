#include<stdio.h>
int main(void)
{
	int n,m,i;
	scanf("%d %d %d",&n,&m,&i);
	if(n==0&&m==1&&i==0||n==1&&m==0&&i==0) printf("Close\n");
	else if(n==1&&m==1&&i==0||n==0&&m==0&&i==1) printf("Open\n");
	else if(n==0&&m==0&&i==0) printf("Close\n");
	return 0;
}
