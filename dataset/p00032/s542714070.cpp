#include<iostream>
#include<cstdio>
using namespace std;
main()
{
	int a,b,c,s=0,t=0;
	while(~scanf("%d,%d,%d",&a,&b,&c))
	{
		if(a*a+b*b==c*c)s++;
		if(a==b)t++;
	}
	cout<<s<<endl<<t<<endl;
}
