#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> primes;
	bool flag[50000];
	int ans[50001];
	fill(flag,flag+50000,0);
	fill(ans,ans+50001,0);
	for(int i = 2; i < 50000; ++i)
	{
		if(!flag[i])
		{
			primes.push_back(i);
			for(int j = 0; j < primes.size(); ++j)
			{
				int tmp=primes[j]+primes[primes.size()-1];
				if(tmp<50001) ans[tmp]++;
			}
			for(int j = i*2; j < 50000; j+=i)
			{
				flag[j]=true;
			}
		}
	}

	int n;
	while(cin>>n,n)
	{
		/*if(n%2==1)
		{
			cout<<0<<endl;
			continue;
		}
		int ans=0;
		for(int i = 0; i < primes.size(); ++i)
		{
			if(n<primes[i]) break;
			for(int j = i; j < primes.size(); ++j)
			{
				if(n<primes[j]) break;
				if(primes[i]+primes[j]==n) ans++;
			}
		}*/
		cout<<ans[n]<<endl;
	}
  return 0;
}