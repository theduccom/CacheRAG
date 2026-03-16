#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n;
	while (cin>>n) 
	{
		bool prime[500000];
		fill(prime,prime+500000,0);
		vector<int> nums;
		for(int i = 2; i < 500000; ++i)
		{
			if(prime[i]) continue;
			nums.push_back(i);
			for(int j = i*2; j < 500000; j+=i)
			{
				prime[j]=true;
			}
		}

		vector<int>::iterator it=lower_bound(nums.begin(),nums.end(),n);
		if(*(it-1)!=n) cout<<*(it-1);
		else cout<<*(it-2);

		it=upper_bound(nums.begin(),nums.end(),n);
		cout<<" "<<*it<<endl;
	}
  return 0;
}