#include<stdio.h>
int main(void)
{
		int a,s,d;
		scanf("%d %d %d",&a,&s,&d);
		if(a==1&&s==0&&d==0||a==0&&s==1&&d==0||a==0&&s==0&&d==0){
				printf("Close\n");
				}
		else{
			printf("Open\n");
			}
	return 0;
}	