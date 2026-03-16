#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
#include<utility>

using namespace std;

int n,m;

long long gc[110][110];
long long gt[110][110];

void warshallfloyd()
{
	for (int k = 0; k < m; k++)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
			{
				gc[i][j] = min(gc[i][j], gc[i][k] + gc[k][j]);
				gt[i][j] = min(gt[i][j], gt[i][k] + gt[k][j]);
			}
		}
	}
}

int main(void)
{
	while (cin >> n >> m, n || m)
	{

		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
			{
				gc[i][j] = 9999999;
				gt[i][j] = 9999999;
			}
		}

		for (int i = 0; i < n; i++)
		{
			int a, b, c, t;

			cin >> a >> b >> c >> t;

			a--; b--;

			gc[a][b] = gc[b][a] = c;
			gt[a][b] = gt[b][a] = t;
		}

		warshallfloyd();

		int k;

		cin >> k;

		for (int i = 0; i < k;i++)
		{
			int p, q, r;

			cin >> p >> q >> r;

			p--; q--;

			if (r == 0)
			{
				cout << gc[p][q] << endl;
			}
			else
			{
				cout << gt[p][q] << endl;
			}
		}
	}

	

	return 0;
}
