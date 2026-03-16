#include<stdio.h>
int main()
{
	int w,s;
	while(scanf("%d",&w),w>=0)
	{
		s=1150;
		if((w-=10)>0)s+=(w<10?w:10)*125;
		if((w-=10)>0)s+=(w<10?w:10)*140;
		if((w-=10)>0)s+=w*160;
		printf("%d\n",4280-s);
	}
	return 0;
}