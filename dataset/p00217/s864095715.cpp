#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef pair<int, int> P;

void solve()
{
	int n;
	while(cin >> n, n)
	{
		vector<P> Vec;
		for(int i = 0; i < n; ++i)
		{
			int num, day1, day2;
			cin >> num >> day1 >> day2;
			Vec.push_back(make_pair(day1 + day2, num));
		}
		sort(Vec.begin(), Vec.end());
		cout << Vec[Vec.size() - 1].second << " " << Vec[Vec.size() - 1].first << endl;
	}
}

int main()
{
	solve();
	return(0);
}