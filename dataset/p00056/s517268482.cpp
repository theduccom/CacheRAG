#include<stdio.h>
#include<bitset>
int main()
{
	const int N=50001;
	int i,j,n,c;
	std::bitset<N>p(3);
	p.flip();
	for(i=2;i*i<N;++i)if(p[i])for(j=i*2;j<N;j+=i)p[j]=0;
	while(scanf("%d",&n),n)
	{
		for(c=i=0,j=n;i<=j;++i,--j)if(p[i]&&p[j])++c;
		printf("%d\n",c);
	}
	return 0;
}