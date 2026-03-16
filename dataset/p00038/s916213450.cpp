#include<cstdio>
#include<algorithm>

using namespace std;

int cards[5];
int card[14]={0};


int main()
{
	start:
	while(scanf("%d,%d,%d,%d,%d",&cards[0],&cards[1],&cards[2],&cards[3],&cards[4])!=EOF)
	{
		fill(card,card+14,0);
		for(int i=0;i<5;i++)
		{
			card[cards[i]-1]++;
			if(cards[i]==1)card[13]++;
		}
		for(int i=0;i<13;i++)
		{
			if(card[i]==4)
			{
				printf("four card\n");
				goto start;
			}
			if(card[i]==3)
			{
				for(int j=0;j<13;j++)
				{
					if(card[j]==2)
					{
						printf("full house\n");
					    goto start;
					}
				}
				printf("three card\n");
					goto start;
			}
		}
		int flag=0;
		for(int i=0;i<13;i++)
		{
			if(card[i]==2)flag++;
		}
		if(flag==2)
		{
			printf("two pair\n");
					goto start;
		}
		if(flag==1)
		{
			printf("one pair\n");
					goto start;
		}
		for(int i=0;i<14;i++)
		{
			int k=1;
			for(int j=0;j<5;j++)
			{
				k*=card[i+j];
			}
			if(k==1)
			{
				printf("straight\n");
				goto start;
			}
		}
		printf("null\n");
		goto start;
	}
	return 0;
}