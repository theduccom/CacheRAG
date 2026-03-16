#include<iostream>
using namespace std;
long sum[4001],p,q;
int n,e;
int E[1000],u[4001];
main()
{
	while(cin>>n,n)
	{
		for(int i=0;i++<4000;)sum[i]=u[i]=0;
		for(int i=0;i<n;i++)
		{
			cin>>e>>p>>q;
			sum[e]+=p*q;
			E[i]=e;
		}
		bool f=0;
		for(int i=0;i<n;i++)
		{
			if(sum[E[i]]>=1e6)
			{
				if(u[E[i]])continue;
				u[E[i]]=1;
				f=1;
				cout<<E[i]<<endl;
			}
		}
		if(!f)cout<<"NA"<<endl;
	}
}

