#include<stdio.h>
#include<bitset>
int main()
{
	const int N=1000001;
	static std::bitset<N>p,c;
	int i,j,n,x,a[30],f;
	p.set();
	p[0]=p[1]=0;
	for(i=2;i<N/2;++i)if(p[i])for(j=2*i;j<N;j+=i)p[j]=0;

	while(scanf("%d%d",&n,&x),n)
	{
		for(i=0;i<n;++i)scanf("%d",&a[i]);
		c.reset();
		c[0]=1;
		for(i=0;i<n;++i)
		{
			for(j=0;j+a[i]<=x;++j)
			{
				if(c[j]) c[ j+a[i] ]=1;
			}
		}
		f=0;
		for(i=x;i>=0;--i)
			if(c[i]&&p[i])
			{
				f=1,x=i;
				break;
			}
		if(f) printf("%d\n",x);
		else puts("NA");
	}
	return 0;
}