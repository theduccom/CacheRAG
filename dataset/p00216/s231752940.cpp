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
	for (int u = 0; u < 200; u++)
	{
		int n;

		cin >> n;
		if (n == -1)
		{
			break;
		}

		if (n <= 10)
		{
			cout << 3130 << endl;
		}
		else if (n <= 20)
		{
			cout << 4280 - (1150 + ((n - 10) * 125)) << endl;
		}
		else if (n <= 30)
		{
			cout << 4280 - (2400 + ((n - 20) * 140)) << endl;
		}
		else
		{
			cout << 4280 - (3800 + ((n - 30) * 160)) << endl;
		}
	}
}

