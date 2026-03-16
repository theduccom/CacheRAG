#include <iostream>

using namespace std;

void solve()
{
	int n;
	while(cin >> n, n)
	{
		for(int i = 0; i < n; ++i)
		{
			int m, e, j;
			cin >> m >> e >> j;
			if((m == 100 || e == 100 || j == 100) || (m + e >= 180) || (m + e + j >= 240))
			{
				cout << "A" << endl;
			}
			else if((m + e + j >= 210) || (m + e + j >= 150 && (e >= 80 || m >= 80)))
			{
				cout << "B" << endl;
			}
			else
			{
				cout << "C" << endl;
			}
		}
	}
}

int main()
{
	solve();
	return(0);
}