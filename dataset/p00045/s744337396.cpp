#include <cstdio>

using namespace std;

int main()
{
	int a,b,cnt=0;
	int sum=0,ave=0;
	
	while(~scanf("%d,%d",&a,&b)){
		sum+=(a*b);
		ave+=b;
		cnt++;
	}
	printf("%d\n%d\n",sum,(int)(ave/(double)cnt+0.5));
	return 0;
}