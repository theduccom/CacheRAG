#include<stdio.h>
#include<vector>
typedef long long ll;
int main()
{
	const int N=4001;
	int n,i,p,q;
	while(scanf("%d",&n),n)
	{
		ll e[N]={0};
		std::vector<int>d;
		while(n--)
		{
			scanf("%d%d%d",&i,&p,&q);
			if(!e[i])d.push_back(i);
			e[i]+=(ll)p*q;
		}
		for(i=n=0;i<d.size();++i)if(e[d[i]]>=1000000)n=printf("%d\n",d[i]);
		if(!n)puts("NA");
	}
	return 0;
}