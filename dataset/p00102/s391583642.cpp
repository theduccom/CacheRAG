#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n, t[11][11], i, j, s;
	while (cin >> n && n)
	{
		for (i = 0; i < n; i++)
		{
			s = 0;
			for (j = 0; j < n; j++)
			{
				cin >> t[i][j];
				s += t[i][j];
			}
			t[i][n] = s;
		}
		for (i = 0; i < n; i++)
		{
			s = 0;
			for (j = 0; j < n; j++)
				s += t[j][i];
			t[n][i] = s;
		}
		s = 0;
		for (i = 0; i < n; i++)
		{
			s += t[i][n];
		}
		t[n][n] = s;
		cout << right;
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				cout << setw(5) << t[i][j];
			}
			cout << endl;
		}
	}
}