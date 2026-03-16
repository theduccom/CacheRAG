#include<stdio.h>

int main(void){
	double a[11],d,sum=0;
	int i;
	
	while(scanf("%lf",&d)!=EOF){
	a[1]=d;
	for(i=2;i<11;i++){
		if(i%2==0)a[i]=a[i-1]*2;
		else a[i]=a[i-1]/3;
	}
	for(i=1;i<11;i++)sum=sum+a[i];
	printf("%0.8f\n",sum);
	sum=0;
	}
return 0;
}