#include<stdio.h>

int main()
{
	while(1)
	{
		int card[14]={0};
		bool two=0,two2=0,three=0,four=0,strate=0;
		for(int i=0;i<5;i++)
		{
			int temp;
			if(scanf("%d,",&temp)==EOF)
				return 0;
			card[temp]++;
		}
		for(int i=1;i<14;i++)
		{
			if(card[i]==2)
			{
				if(two)
					two2=true;
				else
					two=true;
			}
			else if(card[i]==3)
				three=true;
			else if(card[i]==4)
				four=true;
			else if(i+5<14)
			{
				bool flag=false;
				for(int j=0;j<5;j++)
				{
					if(card[i+j]!=1)
					{
						flag=true;
						break;
					}
				}
				if(!flag)
					strate=true;
			}
		}
		if(four)
			printf("four card\n");
		else if(two && three)
			printf("full house\n");
		else if(card[1]==1&&card[10]==1&&card[11]==1&&card[12]==1&&card[13]==1 || strate)
			printf("straight\n");
		else if(three)
			printf("three card\n");
		else if(two && two2)
			printf("two pair\n");
		else if(two)
			printf("one pair\n");
		else
			printf("null\n");
	}
	return 0;
}