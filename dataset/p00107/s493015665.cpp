#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void solve()
{
	vector<int> size(3);
	while(cin >> size[0] >> size[1] >> size[2], size[0] || size[1] || size[2])
	{
		sort(size.begin(), size.end());
		double diagonal = sqrt((double)size[0] * size[0] + size[1] * size[1]);
		int n;
		cin >> n;
		for(int i = 0; i < n; ++i)
		{
			int a;
			cin >> a;
			if(2 * a > diagonal)
			{
				cout << "OK" << endl;
			}
			else
			{
				cout << "NA" << endl;
			}
		}
	}
}

int main()
{
	solve();
	return(0);
}