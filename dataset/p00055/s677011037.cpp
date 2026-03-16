#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <string>
#include <ctype.h>
#include <cstring>
#include <cstdio>
#include <sstream>
#include <functional>

using namespace std;

int main()
{
	long double a, b, sum;
	while (cin>>a)
	{
		sum = a;
		for (int i = 0; i < 9; i++)
		{
			if (i % 2 == 0)
			{
				b = a * 2;
				sum = sum + b;
			}
			else
			{
				b = a / 3;
				sum = sum + b;
			}
			a = b;
		}
		cout << fixed << setprecision(8) << sum << endl;
	}

	return 0;
}