#include <cstdio>
using namespace std;

int main()
{
	double a,s;
	while(scanf("%lf",&a)!=EOF)
	{
		s=a;
		for(int i=2; i<=10; i++)
		{
			a=(i%2 ? a/3.0 : a*2.0);
			s+=a;
		}
		printf("%.8lf\n",s);
	}
}