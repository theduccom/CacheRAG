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
	for (int u = 0; u < 50; u++)
	{
		long n;
		long id[10000],a[10000],b[10000];
		int p = -1;
		int q = 0;

		cin >> n;
		if (n == 0)
		{
			break;
		}

		for (long i = 0; i < n; i++)
		{
			cin >> id[i] >> a[i] >> b[i];
		}

		for (long i = 0; i < n; i++)
		{
			if (a[i] + b[i] > q)
			{
				p = 0;
				p = id[i];
				q = 0;
				q = a[i] + b[i];
			}
		}

		cout << p << " " << q << endl;
	}
}

