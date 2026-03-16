#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
	int n, m;
	while(cin >> n >> m, n || m)
	{
		vector<int> Vec;
		for(int i = 0; i < n; ++i)
		{
			int price;
			cin >> price;
			Vec.push_back(price);
		}
		sort(Vec.begin(), Vec.end());
		int count = 1;
		int sum = 0;
		for(int i = Vec.size() - 1; i >= 0; --i)
		{
			if(count == m)
			{
				count = 1;
				continue;
			}
			sum += Vec[i];
			++count;
		}
		cout << sum << endl;
	}
}

int main()
{
	solve();
	return(0);
}