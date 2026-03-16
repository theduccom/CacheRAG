#include<iostream>

using namespace std;

int main()
{
	int n,m,i,j,p[1000];
	
	for(;;)
	{
		cin >> n >> m;
		if(n==0)
			break;
		
		int ans=0;
		
		for(i=0;i<n;i++)
		{
			cin >> p[i];
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(p[i]<p[j])
				{
					int a;
					a=p[i];
					p[i]=p[j];
					p[j]=a;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if((i+1)%m!=0)
				ans+=p[i];
		}
		cout << ans << endl;
	}
}