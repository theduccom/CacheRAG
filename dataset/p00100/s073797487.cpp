#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
ll sums[4000];
bool used[4000];
int main()
{
	int n;
	while(cin>>n,n) 
	{
		vector<int> order;
		bool f=false;
		int num;
		int a,b;
		fill(sums,sums+4000,0);
		fill(used,used+4000,0);
		for(int i = 0; i < n; ++i)
		{
			cin>>num>>a>>b;
			sums[num-1]+=(ll)a*b;
			order.push_back(num-1);
		}
		for(int i = 0; i < order.size(); ++i)
		{
			if(!used[order[i]]&&sums[order[i]]>=1000000)
			{
				cout<<order[i]+1<<endl;
				f=true;
				used[order[i]]=true;
			}
		}
		if(!f) cout<<"NA"<<endl;
	}
  return 0;
}