#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
typedef pair<int, int> P;

void solve()
{
	int n;
	while(cin >> n, n)
	{
		vector<P> Vec(n);
		for(int i = 0; i < n; ++i)
		{
			int temp1, temp2;
			cin >> Vec[i].second >> temp1 >> temp2;
			Vec[i].first = temp1 + temp2;
		}
		sort(Vec.begin(), Vec.end(), greater<P>() );
		cout << Vec[0].second << " " << Vec[0].first << endl;
	}
}

int main()
{
	solve();
	return(0);
}