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
	for (int u = 0; u < 20; u++)
	{
		int a[10001];
		long n = 0,co[11];

		cin >> n;
		if (n == 0)
		{
			break;
		}

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int j = 0; j < 10; j++)
		{
			co[j] = 0;
		}

		for (int i = 0; i < n; i++)
		{
			co[a[i]] += 1;
		}

		for (int j = 0; j < 10; j++)
		{
			if (co[j] == 0)
			{
				cout << '-';
			}
			else
			{
				for (int k = 0; k < co[j]; k++)
				{
					cout << '*';
				}
			}
			cout << endl;
		}
	}
}

