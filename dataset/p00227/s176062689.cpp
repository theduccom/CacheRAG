#include<stdio.h>
#include<algorithm>
#include<numeric>
int main()
{
	int m,n,p[10000],i,d;
	while(scanf("%d%d",&n,&m),m)
	{
		for(d=i=0;i<n;++i)scanf("%d",&p[i]);
		std::sort(p,p+n);
		for(i=n-m;i>=0;i-=m)d+=p[i];
		printf("%d\n",std::accumulate(p,p+n,0)-d);
	}
	return 0;
}