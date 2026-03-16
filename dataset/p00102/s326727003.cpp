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
	for (int i = 0; i < 100; i++)
	{
		int n,a[100][100];
		cin >> n;
		if (n == 0)
		{
			break;
		}

		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				cin >> a[j][k];
			}
		}
		int co = 0;
		int coo = 0;

		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				co += a[j][k];
			}
			a[j][n] = co;
			co = 0;
		}

		for (int k = 0; k < n + 1; k++)
		{
			for (int j = 0; j < n; j++)
			{
				coo += a[j][k];
			}
			a[n][k] = coo;
			coo = 0;
		}



		for (int j = 0; j < n + 1; j++)
		{
			for (int k = 0; k < n + 1; k++)
			{
				ostringstream p;
				string pp;
				p << a[j][k];
				pp = p.str();
				int l = 0;
				l = pp.size();
				if (l == 1)
				{
					cout << "    ";
				}
				else if (l == 2)
				{
					cout << "   ";
				}
				else if (l == 3)
				{
					cout << "  ";
				}
				else if (l == 4)
				{
					cout << " ";
				}
				cout << a[j][k];
			}
			cout << endl;
		}
	}
}
