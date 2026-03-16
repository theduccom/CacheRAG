#include<cstdio>

using namespace std;

int main()
{
	static bool era[1000000];
	for(int i=2;i<1000;i++){
		if(!era[i])for(int j=i*i;j<1000000;j+=i)era[j]=true;
	}

	static int p[10001];
	for(int i=2,j=0;j<10001;i++)	if(!era[i])	p[j++]=i;

	static int s[10001]={0,p[0]};
	for(int i=1;i<10000;i++)	s[i+1]=s[i]+p[i];

	int n;
	while(scanf("%d",&n),n)	printf("%d\n",s[n]);

	return 0;
}