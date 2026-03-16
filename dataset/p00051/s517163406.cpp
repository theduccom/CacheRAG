#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	while(n--)
	{
		int num;
		cin >> num;
		vector<int> Vec;
		while(num)
		{
			Vec.push_back(num % 10);
			num /= 10;
		}
		sort(Vec.begin(), Vec.end());
		int max = 0, min = 0;
		for(int i = Vec.size() - 1; i >= 0; --i)
		{
			max *= 10;
			max += Vec[i];
		}
		for(int i = 0; i < Vec.size(); ++i)
		{
			min *= 10;
			min += Vec[i];
		}
		cout << max - min << endl;
	}
}

int main()
{
	solve();
	return(0);
}