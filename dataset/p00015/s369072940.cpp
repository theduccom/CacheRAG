#include <stdio.h>
#include <string.h>

char s1[10000];
char s2[10000];

int n1[10000];
int n2[10000];

int no[100];
char so[100];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
	{
		scanf("%s",s1);
		scanf("%s",s2);
		int l = strlen(s1);
		if(l > 80)
		{
			printf("overflow\n");
			continue;
		}
		for(int i = 0; i < l; i++)
		{
			n1[i] = s1[l - 1 - i] - '0';
		}
		for(int i = l; i < 80; i++)
		{
			n1[i] = 0;
		}
		l = strlen(s2);
		if(l > 80)
		{
			printf("overflow\n");
			continue;
		}
		for(int i = 0; i < l; i++)
		{
			n2[i] = s2[l - 1 - i] - '0';
		}
		for(int i = l; i < 80; i++)
		{
			n2[i] = 0;
		}
		int keta = 0;
		for(int i = 0; i < 80; i++)
		{
			int w = n1[i] + n2[i] + keta;
			no[i] = w % 10;
			keta = w / 10;
		}
		if(keta != 0)
		{
			printf("overflow\n");
		}
		else
		{
			int b = 0;
			for(int i = 80 - 1; i >= 0; i--)
			{
				if(b != 0 || no[i] != 0)
				{
					so[b] = no[i] + '0';
					b++;
				}
			}
			if(b == 0)
			{
				printf("0\n");
			}
			else
			{
				so[b] = '\0';
				printf("%s\n",so);
			}
		}
	}
	return 0;
}