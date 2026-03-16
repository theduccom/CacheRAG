#include <queue>
#include <cstdio>
#include <iostream>
#include <math.h>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

int a[100], b[100];

int main() {

	int i;

	for (i = 0; i < 100 ; i++)
	{
		cin >> a[i] >> b[i];
		if (a[i] == 0 && b[i] == 0) break;
	}

	//iは要素数

	for (int j = 0; j < i; j++)
	{
		if (a[j] == 0 && b[j] == 0) break;

		bool ans = false;

		for (int k = a[j]; k <= b[j]; k++)
		{
			if (k % 4 == 0)
			{
				if (k % 400 == 0)
				{
					ans = true;
					cout << k << endl;
					continue;
				}
				if (k % 100 == 0)
					continue;
				ans = true;
				cout << k << endl;
			}
		}
		if (ans == false) cout << "NA" << endl;
		if (j != i - 1) cout << endl;
	}
}
