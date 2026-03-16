#include<stdio.h>
int main(void)
{
		int i,n,f;
		scanf("%d %d %d",&i,&n,&f);
		if(i==1&&n==0&&f==0){
			printf("Close\n");
			}
		if(i==0&&n==1&&f==0){
			printf("Close\n");
			}
		if(i==1&&n==1&&f==0){
			printf("Open\n");
			}
		if(i==0&&n==0&&f==1){
			printf("Open\n");
			}
		if(i==0&&n==0&&f==0){
			printf("Close\n");
			}
		return 0;
}