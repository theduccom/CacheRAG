#include<stdio.h>
int main(){
	int a;
	while(~scanf("%d",&a)){
		for(int i=0;i<10;i++)if(1<<i&a)printf(1<<i+1>a?"%d":"%d ",1<<i);
		printf("\n");
	}
}