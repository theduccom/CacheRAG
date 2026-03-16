#include<cstdio>

using namespace std;

int main()
{
	int p,n,k=0,sum=0,nsum=0;
	while(~scanf("%d,%d",&p,&n)){
		sum+=p*n;
		nsum+=n;
		k++;
	}
	printf("%d\n%d\n",sum,(int)((double)nsum/k+0.5));
	return 0;
}