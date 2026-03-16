#include <cstdio>
using namespace std;

int main()
{
	int a,b,c,tc,rc;
	tc = rc = 0;
	while(scanf("%d,%d,%d",&a,&b,&c) == 3)
	{
		if(a == b) ++ rc;
		else if(a * a + b * b == c * c) ++tc;
	}
	printf("%d\n%d\n",tc,rc);
	return 0;
}