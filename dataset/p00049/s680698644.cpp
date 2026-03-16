#include<cstdio>

using namespace std;

int answer[4]={0};

int main()
{
	int n;
	char c[4];
	while(scanf("%d,%s",&n,c)!=EOF)
	{
		if(c[0]=='A'&&c[1]!='B') answer[0]++;
		else if(c[0]=='B')answer[1]++;
		else if(c[0]=='O')answer[3]++;
		else answer[2]++;
	}
	for(int i=0;i<4;i++)
	{
		printf("%d\n",answer[i]);
	}
	return 0;
}