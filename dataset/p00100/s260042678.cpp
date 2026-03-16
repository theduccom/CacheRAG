#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <limits>
#include <sstream>

using namespace std;

int main (void)
{
	for (int j = 0; j < 50; j++)
	{
		long n,e[4000],x[4000],y[4000],co[4000];

		cin >> n;
		if (n == 0)
		{
			break;
		}

		for (int i = 0; i < n; i++)
		{
			cin >> e[i] >> x[i] >> y[i];
		}

		for (int i = 0; i < n; i++)
		{
			co[i] = 0;
			for (int k = 0; k < n; k++)
			{
				if (i <= k && e[i] == e[k])
				{
					co[i] += x[k] * y[k];
					if (i != k)
					{
						e[k] = -1;
					}
				}
			}
		}
	int gg = 0;
		for (int i = 0; i < n; i++)
		{
			if (e[i] != -1 && co[i] >= 1000000)
			{	gg += -1;
				cout << e[i] << endl;
			}
			if (i == n - 1 && gg == 0)
			{
				cout << "NA" << endl;
			}
		}
	}
}


