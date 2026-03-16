#include<cstdio>

int count=0;

int main()
{
	int ans_n=0;
	double ans_m=0.0;
	int n,m;
	while(scanf("%d,%d",&n,&m)!=EOF)
	{
		count++;
		ans_n+=n*m;
		ans_m+=m;
	}
	printf("%d\n%d\n",ans_n,(int)(ans_m/count+0.5));
	return 0;
}