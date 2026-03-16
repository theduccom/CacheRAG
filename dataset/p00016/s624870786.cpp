#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	double x=0,y=0;
	double l,a=0,b;
	for(;~scanf("%lf,%lf",&l,&b);)
	{
		x+=l*sin(a);
		y+=l*cos(a);
		a+=b/180*M_PI;
	}
	cout<<(int)x<<"\n"<<(int)y<<endl;
}

