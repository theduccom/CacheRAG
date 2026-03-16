#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> prime;
	int i,j;
	
	for(i=0;i<1000001;i++)
		prime.push_back(1);
	
	prime[0]=prime[1]=0;
	
	for(i=2;i<1000001;i++)
	{
		if(prime[i]==1)
		{
			for(j=2;j*i<1000001;j++)
				prime[j*i]=0;
		}
	}
	
	int n,x,ans;
	
	for(;;)
	{
		cin >> n >> x ;
		if(n==0 && x==0)
			break;
		
		vector<int> price;
		ans=0;
		
		for(i=0;i<n;i++)
		{
			int a;
			cin >> a;
			price.push_back(a);
		}
		
		vector<int> sans;
		
		for(i=0;i<1000001;i++)
			sans.push_back(0);
		
		for(i=0;i<price.size();i++)
			sans[price[i]]=1;
		
		for(i=0;i<=x;i++)
		{
			if(sans[i]==1)
			{
				if(prime[i]==1)
					ans=i;
				for(j=0;j<price.size();j++)
				{
					if(i+price[j]<=x)
					{
						sans[i+price[j]]=1;
					}
				}
			}
		}
		
		if(ans==0)
			cout << "NA" << endl;
		else
			cout << ans << endl;
	}
}