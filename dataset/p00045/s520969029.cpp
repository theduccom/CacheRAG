#include<stdio.h>
int main(void)
{
	int sum,cnt,suusum;
	int tan,suu,avg2;
	float avg;
	cnt=0;
	sum=0;
	suusum=0;
	while(scanf("%d,%d",&tan,&suu)!=EOF){
		cnt++;
		sum=sum+tan*suu;
		suusum+=suu;
	}
	avg=(float)suusum/cnt;
	avg2=avg+0.5;
	printf("%d\n%d\n",sum,avg2);
	return 0;
}