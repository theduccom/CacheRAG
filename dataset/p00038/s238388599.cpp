#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
	int x;
	
	while(scanf("%d",&x)!=EOF)
	{
		int a[14]={};
		a[x]++;
		for(int i=0;i<4;i++)
		{
			scanf(",%d",&x);
			a[x]++;
		}
		int c=0,z=0;
		for(int i=1;i<=13;i++)c=max(c,a[i]);
		for(int i=1;i<=13;i++)if(c==a[i])z++;
		if(c==2&&z==1)
		{
			cout<<"one pair"<<endl;
		}
		else if(c==2&&z==2)
		{
			cout<<"two pair"<<endl;
		}
		else if(c==3)
		{
			for(int i=1;i<=13;i++)
			{
				if(a[i]==2)
				{
					cout<<"full house"<<endl;
					break;
				}
				if(i==13)
				{
					cout<<"three card"<<endl;
				}
			}
		}
		else if(c==4)
		{
			cout<<"four card"<<endl;
		}
		else
		{
			bool e=false;
			for(int i=1;i<=10;i++)
			{
				bool hoge=true;
				for(int l=0;l<5;l++)
				{
					int g=i+l;
					if(g>13)
					{
						g-=13;
					}
					if(a[g]==0)hoge=false;
				}
				if(hoge==true)e=true;
			}
			if(e)cout<<"straight"<<endl;
			else cout<<"null"<<endl;
			
		}
	}
}