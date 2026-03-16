#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <list>
#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main()
{
	while (true)
	{
		int x, h;
		scanf("%d\n%d\n", &x, &h);
		if (x == 0 && h ==0)
			break;

		printf("%.6f\n", x*x + 2*x*sqrt(x*x/4.0+h*h));
	}
	return 0;
}