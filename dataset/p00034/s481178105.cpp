#include<iostream>
#include<cstdio>
using namespace std;
main()
{
	int l[10],v1,v2;
	while(1){
		for(int i=0;i<10;i++)if(!~scanf("%d,",l+i))break;
		if(!~scanf("%d,%d",&v1,&v2))break;
		int s=0;
		for(int i=0;i<10;i++)s+=l[i];
		double p=v1*1.0/(v1+v2);
		double u=s*p,t=0;
		for(int i=0;i<10;i++)
		{
			t+=l[i];
			if(u<=t)
			{
				cout<<i+1<<endl;
				break;
			}
		}
	}
}
