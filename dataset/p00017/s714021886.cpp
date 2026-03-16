#include <stdio.h>
#include <string.h>

char s1[100];
char s2[100];

int main()
{
	while(1)
	{
		if(NULL == fgets(s1,100,stdin))
		{
			break;
		}
		s1[strlen(s1) - 1] = '\0';
		int l = strlen(s1);
		for(int i = 0; i < 26; i++)
		{
			strcpy(s2,s1);
			for(int j = 0; j < l; j++)
			{
				if('a' <= s2[j] && s2[j] <= 'z')
				{
					int w = s2[j] + i;
					if(w > 'z')
					{
						w -= 26;
					}
					s2[j] = w;
				}
			}
			if(NULL != strstr(s2,"the") || NULL != strstr(s2,"this") || NULL != strstr(s2,"that"))
			{
				printf("%s\n",s2);
				break;
			}
		}
	}
	return 0;
}