#include<stdio.h>
int main()
{
	int n,r;
	while(1){
		r=0;
		scanf("%d",&n);
		if(n==0){
			break;
		}
		do{
			n/=5;
			r+=n;
		}while(n!=0);
		printf("%d\n",r);
	}
	return 0;
}