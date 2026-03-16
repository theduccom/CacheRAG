#include<stdio.h>
int main(void)
{
    int n,w,a;
	while(1){
	    scanf("%d",&n);
		if(n==-1) break;
		w=1150;
		if(n>30){
		    w=w+(n-30)*160;
			if(n>=40) n=30;
			else n=(n/10)*10;
		}
		if(n>20){
		    w=w+(n-20)*140;
			if(n==30) n=20;
			else n=(n/10)*10;
		}
		if(n>10){
		    w=w+(n-10)*125;
		}
		a=4280-w;
		printf("%d\n",a);
	}
	return 0;
}