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
	double a;
	while (scanf("%lf\n", &a) != EOF)
	{
		double arr[10];
		arr[0] = a;
		for (int i = 1; i < 10; ++i)
			arr[i] = (i&1) ? arr[i-1] * 2 : arr[i-1] / 3;
		double s = 0;
		for (int i = 0; i < 10; ++i)
			s += arr[i];
		printf("%.8f\n", s);
	}

	return 0;
}