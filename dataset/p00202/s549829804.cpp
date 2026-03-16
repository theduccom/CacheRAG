#include<iostream>
#include<vector>

using namespace std;

int main()
{
	char pri[1000000];
	int i,j;
	
	for(i=0;i<1000000;i++)
	{
		pri[i]='1';
	}
	pri[0]=pri[1]='0';
	
	for(i=0;i<1000000;i++)
	{
		if(pri[i]=='1')
		{
			for(j=2;j*i<1000000;j++)
			{
				pri[i*j]='0';
			}
		}
	}
	
	int n,max,menu[100];
	vector<char> sum;
	
	
	for(;;)
	{
		cin >> n >> max ;
		if(n==0 && max==0)
			break;
		int ans=0;
		sum.clear();
		for(i=0;i<1000000;i++)
			sum.push_back(0);
		
		for(i=0;i<n;i++)
		{
			cin >> menu[i];
			sum[menu[i]]='1';
		}
		
		for(i=0;i<=max;i++)
		{
			if(sum[i]=='1')
			{
				if(pri[i]=='1')
					ans=i;
				for(j=0;j<n;j++)
				{
					if(i+menu[j]<=max)
						sum[i+menu[j]]='1';
				}
			}
		}
		if(ans==0)
			cout << "NA" << endl;
		else
			cout << ans << endl;
	}
}