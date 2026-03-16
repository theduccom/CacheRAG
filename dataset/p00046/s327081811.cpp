#include<stdio.h>
int main(void)
{
	double max=0,min=10000,temp,ans;
	while(scanf("%lf",&temp)!=EOF){
		if(temp>max){
			max=temp;
		}
		if(temp<min){
			min=temp;
		}
	}
	printf("%lf",max-min);
	return 0;
}