#include<stdio.h>
int main(void)
{
	int n=1;
	int syurui[10]={0};
	int kazu=0;
	int i=0,j=0;
	
	
	while (n!=0)
	{
		scanf("%d",&n);
		if (n==0)
		{
			break;
		}
		for (i=1;i<=n;i++)
		{
			scanf("%d",&kazu);
			syurui[kazu]++;
		}
		for (i=0;i<10;i++)
		{
			if (syurui[i]==0)
			{
				printf("-");
			}
			else
			{
				for (j=1;j<=syurui[i];j++)
				{
					printf("*");
				}
			}
			printf("\n");
			syurui[i]=0;
		}
	}
	return 0;
}