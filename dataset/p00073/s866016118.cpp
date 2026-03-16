#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int x,h;
	while(cin>>x>>h,x)
	{
		printf("%.9lf\n",x*x+x*0.5*sqrt(x*x*0.5*0.5+h*h)*4);
	}
  return 0;
}