#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double a;
	while (cin>>a) 
	{
		double ans=a;
		for(int i = 2; i < 11; ++i)
		{
			if(i%2==0) a=a*2;
			else a=a/3;
			ans+=a;
		}
		printf("%.9lf\n",ans);
	}
  return 0;
}