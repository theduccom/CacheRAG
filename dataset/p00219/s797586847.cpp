#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int n,c[10]={0},m;
	while(1)
	{	
		for(int i=0;i<10;i++)
		{
			c[i]=0;
		}
		cin>>n;
		if(n==0)
		{
			break;
		}
		for(int i=1;i<=n;i++)
		{
			cin>>m;
			c[m]+=1;
		}
		for(int i=0;i<10;i++)
		{
			if(c[i]==0)
			{
				cout<<"_"<<endl;
			}
			else
			{
				for(int j=0;j<c[i];j++)
				{
					cout<<"*";
				}
				cout<<endl;
			}
		}
	}	
	return 0;
}
