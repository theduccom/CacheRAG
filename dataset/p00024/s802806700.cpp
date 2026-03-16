#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
using namespace std;
int main ()
{
	double v;
	while(scanf("%lf",&v)!=EOF)
	{
		double t=v/9.8;
		double y=4.9*t*t;
		double ans=0;
		for(;5*ans-5<y;ans+=1.0);
			cout<<(int)ans<<endl;
	}
	return 0;
}