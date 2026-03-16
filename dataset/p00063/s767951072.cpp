#include<stdio.h>
#include<string.h>

int main(void)
{
	const int N = 100;
	char str[N+1];
	int count = 0;
	int i, j;
	while(scanf("%s", str) == 1)
	{
		int size = strlen(str);
		for(i = 0, j = size-1; i<j; i++,j--)
		{
			if(str[i] != str[j])
				break;
		}
		if(i >= j)
			count++;
	}
	printf("%d\n", count);
	return 0;
}