#include<stdio.h>
int main()
{
	int n,outCount,score,runnerCount,a[3];
	char s[8];
	scanf("%d",&n);
	while(n--)
	{
		outCount = score = runnerCount = 0;
		while(outCount<3)
		{
			scanf("%s",s);
			switch(s[1])
			{
			case 'I':
				(runnerCount<3 ? ++runnerCount : score++);
				break;
			case 'O':
				score += runnerCount+1, runnerCount=0;
				break;
			case 'U':
				++outCount;
				break;
			}
		}
		printf("%d\n",score);
	}
	return 0;
}