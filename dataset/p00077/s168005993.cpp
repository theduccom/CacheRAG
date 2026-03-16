#include<cstdio>
#include<cstring>
using namespace std;
int main(void)
{
	int i,n,x,j;
	char buf[101];
	while(scanf("%s",buf)!=EOF)	{
		n=strlen(buf);
		for(i=0;i<n;i++)	{
			if(buf[i]!='@')	printf("%c",buf[i]);
			else {
				x=buf[i+1]-'0';
				for(j=0;j<x;j++)	{
					printf("%c",buf[i+2]);
				}
				i=i+2;
			}
		}
		printf("\n");
	}
	return 0;
}
