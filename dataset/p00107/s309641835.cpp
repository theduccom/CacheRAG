#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void solve()
{
	vector<double> a(3);
	while(cin >> a[0] >> a[1] >> a[2], a[0] || a[1] || a[2])
	{
		sort(a.begin(), a.end());
		double Length = sqrt(a[0] * a[0] + a[1] * a[1]);
		int N;
		cin >> N;
		while(N--)
		{
			int hole;
			cin >> hole;
			if(hole * 2 > Length)
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