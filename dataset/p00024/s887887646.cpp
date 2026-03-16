#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	double v;
	while(~scanf("%lf",&v))
	{
		double t=v/9.8;
		t*=t*4.9;
		int c=1;
		double h=0.0;
		while(h<t)
		{
			h+=5.0;
			c++;
		}
		cout<<c<<endl;
	}
	return 0;
}