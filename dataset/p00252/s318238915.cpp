#include <stdio.h>

int main(void)
{
	int a,b=0,c,i,j;
	scanf("%d %d %d",&a,&b,&c);
	if(a==1){
		if(b==0){
			printf("Close\n");
		}
		if(b==1){
			printf("Open\n");
		}
	}
	else{
		if(b==0){
			if(c==0){
				printf("Close\n");
			}
			if(c==1){
				printf("Open\n");
			}
		}
		if(b==1){
			printf("Close\n");
		}
	}
}