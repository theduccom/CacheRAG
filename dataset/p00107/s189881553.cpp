#include<stdio.h>
#include<algorithm>
int main(void)
{
	int i,n,x,y,z,r,m;
	while(scanf("%d%d%d",&x,&y,&z), x)
	{
		m = std::min(x*x+y*y, std::min(y*y+z*z,z*z+x*x));

		scanf("%d",&n);
		for(i = 0; i < n; ++i)
		{
			scanf("%d",&r);
			puts( m<4*r*r ? "OK" : "NA" );
		}
	}
	return 0;
}