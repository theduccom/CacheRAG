#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	int ban,i,j;
	int date[4];
	char s[3];
	for(i=0;i<4;i++) date[i]=0;
	while(scanf("%d,%s",&ban,s)!=EOF) {
		if(strcmp(s,"A")==0) date[0]++;
		else if(strcmp(s,"B")==0) date[1]++;
		else if(strcmp(s,"AB")==0) date[2]++;
		else if(strcmp(s,"O")==0) date[3]++;
	}
	for(i=0;i<4;i++) printf("%d\n",date[i]);
	return 0;
}