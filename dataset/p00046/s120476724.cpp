#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <climits>
#include <cfloat>


using namespace std;


int main()
{
	double ma = DBL_MIN;
	double mi = DBL_MAX;
	double al;
	while (scanf("%lf", &al) != EOF)
	{
		if (al > ma)
			ma = al;
		if (al < mi)
			mi = al;
	}

	printf("%.1f\n", ma-mi);

	return 0;
}