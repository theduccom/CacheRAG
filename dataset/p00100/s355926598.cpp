#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	long long value[4001];

	int n,num;
	long long k,m;
	while(cin >> n && n)
	{
		memset(value,0,sizeof(value));

		vector<int> ans;
		rep(i,n)
		{
			cin >> num >> k >> m;
			vector<int>::iterator ite = find(ans.begin(),ans.end(),num);
			if(ite == ans.end())
			{
				value[num] += k*m;
				
				if(value[num] >= 1000000)
				{
					ans.push_back(num);
				}
			}			
		}

		if(ans.size() == 0)
		{
			cout << "NA" << endl;
		}
		else
		{
			rep(i,ans.size())
			{
				cout << ans[i] << endl;
			}
		}
	}
	return 0;
}