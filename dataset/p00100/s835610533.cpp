#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while(cin>>n&&n)
	{
		unsigned long long v[4001]={};
		vector<int> id,ans;
		for(int i=0;i<n;i++)
		{
			unsigned long long a,b,c;
			cin>>a>>b>>c;
			id.push_back(a);
			v[a]+=b*c;
		}
		for(int i=0;i<=4000;i++)
		{
			if(v[i]>=1000000)ans.push_back(i);
		}
		bool ok=true;
		for(int i=0;i<id.size();i++)
		{
			if(binary_search(ans.begin(),ans.end(),id[i]))
			{
				auto it=lower_bound(ans.begin(),ans.end(),id[i]);
				ans.erase(it);
				cout<<id[i]<<endl;
				ok=false;
			}
		}
		if(ok)cout<<"NA"<<endl;
	}
}