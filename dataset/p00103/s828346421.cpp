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
	int n;
	string a[100][100];
	int p[100],co[100],run[100];
	cin >> n;

	for (int j = 0; j < n; j++)
	{
		p[j] = 0;
		co[j] = 0;
		run[j] = 0;
		for (int i = 0; i < 100; i++)
		{
			cin >> a[j][i];

			if (a[j][i] == "OUT")
			{
				p[j] += 1;
			}
			if (p[j] == 3)
			{
				break;
			}

			if (a[j][i] == "HIT")
			{
				run[j] += 1;
				if (run[j] == 4)
				{
					co[j] += 1;
					run[j] = run[j] - 1;
				}
			}
			else if (a[j][i] == "HOMERUN")
			{
				co[j] += run[j] + 1;
				run[j] = 0;
			}
		}

		cout << co[j] << endl;
	}
}

