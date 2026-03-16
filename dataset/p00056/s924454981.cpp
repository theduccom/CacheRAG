#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	vector<int> prime;
	int i,j;
	
	for(i=0;i<1000000;i++)
	{
		prime.push_back(1);
	}
	prime[0]=prime[1]=0;
	
	for(i=0;i<1000000;i++)
	{
		if(prime[i]==1)
		{
			for(j=2;j*i<1000000;j++)
			{
				prime[i*j]=0;
			}
		}
	}
	
	for(;;)
	{
		cin >> n ;
		if(n==0)
			break;
		
		int ans=0;
		
		for(i=0;i<=n-i;i++)
		{
			if(prime[i]==1)
			{
				if(prime[n-i]==1)
				{
					ans++;
//					cout << "f1:" << i << " f2:" << n-i << " ans:" << ans << endl;
				}
			}
		}
		
		cout << ans << endl;
		
	}
}