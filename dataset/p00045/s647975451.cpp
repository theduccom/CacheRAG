#include<stdio.h>

int main(){
	int sum=0;
	int num=0;
	int now=0;
	
	int a,b;
	while(~scanf("%d,%d",&a,&b)){
		sum+=a*b;
		now++;
		num+=b;
	}
	printf("%d\n%d\n",sum,(int)((double)num/(double)now+0.5));
}