#include<stdio.h>
#include<math.h>
inline double SQ(double x){return x*x;}
int main(void)
{
	const int N = 20;
	double x[N],y[N],S=0,a,b,c,s;
	int n = 0;
	while(scanf("%lf,%lf",&x[n],&y[n]) == 2)
		++n;
	int i = 0, j = 1, k = n-1;
	while(i<j && j<k)
	{
		a = sqrt( SQ(x[i]-x[j])+SQ(y[i]-y[j]) );
		b = sqrt( SQ(x[j]-x[k])+SQ(y[j]-y[k]) );
		c = sqrt( SQ(x[k]-x[i])+SQ(y[k]-y[i]) );
		s = (a+b+c)/2;
		S += sqrt( s*(s-a)*(s-b)*(s-c) );
		
		if(j-i==1)
		{
			i = j;
			j = k-1;
		}
		else
		{
			k = j;
			j = i+1;
		}
	}
	printf("%f\n",S);

	return 0;
}