#include <iostream>
using namespace std;

int t[16][16];

int main()
{
	int n;
	while(cin >> n, n)
	{
		for(int y=0; y<=n; y++)
		for(int x=0; x<=n; x++)
		{
			t[y][x] = 0;
		}

		for(int y=0; y<n; y++)
		for(int x=0; x<n; x++)
		{
			cin >> t[y][x];
			t[n][x] += t[y][x];
			t[y][n] += t[y][x];
			t[n][n] += t[y][x];
		}

		for(int y=0; y<=n; y++)
		{
			for(int x=0; x<=n; x++)
			{
				cout.width(5);
				cout << t[y][x];
			}
			cout << endl;
		}
	}

	return 0;
}