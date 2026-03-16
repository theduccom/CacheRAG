#include<stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==1){
		if(b==1){
			printf("Open\n");
		}
		else{
			printf("Close\n");
		}
	}
	else{
		if(b==0){
			if(c==0){
				printf("Close\n");
			}
			else{
				printf("Open\n");
			}
		}
		else{
			printf("Close\n");
		}
	}
	return 0;
}
	
		
