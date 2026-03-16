#include <iomanip>
#include <utility>
#include <vector>
#include <math.h>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int d, w, h, n, r[10000];
	while (cin >> d >> w >> h >> n && d != 0)
	{
		for (int i = 0; i < n; i++)
			cin >> r[i];
		int c0 = d*d + w*w;
		int c1 = d*d + h*h;
		int c2 = w*w + h*h;
		for (int i = 0; i < n; i++)
		{
			int p = 4 * r[i] * r[i];
			if (c0 < p || c1 < p || c2 < p)
				cout << "OK" << endl;
			else
				cout << "NA" << endl;
		}
	}

	return 0;
}