#include<stdio.h>
int main()
{
	int  totalMoney=0, totalCount=0, stepCount=0;
	int  unitCost,count;
	while(scanf("%d, %d",&unitCost, &count)==2)
	{
		totalMoney += unitCost*count;
		totalCount += count;
		++stepCount;
	}
	printf("%d\n%.0f\n",totalMoney, (1e-7+totalCount)/stepCount);
	return 0;
}