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
	for (long u = 0; u < 1000; u++)
	{
		int a[10001],b[10001],c[10001];
		long n;

		cin >> n;
		if (n == 0)
		{
			break;
		}

		for (int i = 0; i < n; i++)
		{
			cin >> a[i] >> b[i] >> c[i];
		}

		int p = 0;

		for (int i = 0; i < n; i++)
		{
			p = (a[i] + b[i] + c[i]) / 3;
			if (a[i] == 100 || b[i] == 100)
			{
				cout << 'A' << endl;
			}
			else if (c[i] == 100)
			{
				cout << 'A' << endl;
			}
			else if ((a[i] + b[i]) / 2 >= 90)
			{
				cout << 'A' << endl;
			}
			else if (p >= 80)
			{
				cout << 'A' << endl;
			}
			else if (p >= 70)
			{
				cout << 'B' << endl;
			}
			else if (p >= 50 && a[i] >= 80)
			{
				cout << 'B' << endl;
			}
			else if (p >= 50 && b[i] >= 80)
			{
				cout << 'B' << endl;
			}
			else
			{
				cout << 'C' << endl;
			}
		}
	}
}


