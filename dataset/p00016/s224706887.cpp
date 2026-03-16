#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

#define Pai 3.141592653589793
int main(void)
{
	double x=0,y=0,l=90,n,m;
	
	while(1){
		scanf("%lf,%lf",&n,&m);
		if (n==0&&m==0) {
			break;
		}
		y+=(double)n*sin((double)l*Pai/180.0);
		x+=(double)n*cos((double)l*Pai/180.0);
		l-=(double)m;
	}
	printf("%d\n%d\n",(int)x,(int)y);
	
	return (0);
}