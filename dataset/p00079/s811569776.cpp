#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	double xs[20],ys[20];
	int cnt=0;
	while(scanf("%lf,%lf",&xs[cnt],&ys[cnt])!=EOF) 
	{
		++cnt;
	}

	int mid=1;
	double ans=0;
	while(mid+1<cnt) 
	{
		double a=sqrt( (xs[mid]-xs[0])*(xs[mid]-xs[0])+(ys[mid]-ys[0])*(ys[mid]-ys[0]) );
		double b=sqrt( (xs[mid]-xs[mid+1])*(xs[mid]-xs[mid+1])+(ys[mid]-ys[mid+1])*(ys[mid]-ys[mid+1]) );
		double c=sqrt( (xs[mid+1]-xs[0])*(xs[mid+1]-xs[0])+(ys[mid+1]-ys[0])*(ys[mid+1]-ys[0]) );
		double z=(a+b+c)/2;
		ans+=sqrt(z*(z-a)*(z-b)*(z-c));
		mid++;
	}
	printf("%.9lf\n",ans);
  return 0;
}