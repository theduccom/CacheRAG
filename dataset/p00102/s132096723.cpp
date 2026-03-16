#include <vector>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int n;

	while (true)
	{
		cin >> n;

		if (n == 0) { break; }

		vector<vector<int> > R(n + 1, vector<int>(n + 1, 0));

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> R[i][j];
			}
		}

		for (int i = 0; i <= n; i++)
		{
			int sum1 = 0;
			int sum2 = 0;

			for (int j = 0; j < n; j++)
			{
				sum1 += R[i][j];
				sum2 += R[j][i];
			}

			R[i][n] = sum1;
			R[n][i] = sum2;
		}

		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				cout << setw(5) << R[i][j];
			}

			cout << endl;
		}
	}

	return 0;
}