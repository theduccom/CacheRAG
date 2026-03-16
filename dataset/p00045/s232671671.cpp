#include <cstdio>

using namespace std;

int main()
{
	int sum=0,count=0,line=0;
	for(int a,b;scanf("%d,%d",&a,&b)==2;sum+=a*b,count+=b,line++)
		;
	printf("%d\n%d\n",sum,int((double)count/line+0.5+1e-10));
	
	return 0;
}