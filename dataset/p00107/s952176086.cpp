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
	int t[3];
	while (scanf("%d %d %d", t, t+1, t+2), t[0] | t[1] | t[2])
	{
		sort(t, t+3);
		double len = sqrt((double)t[0]*t[0]+t[1]*t[1]);
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
		{
			int r;
			scanf("%d", &r);
			if (len < 2.0 * r)
				printf("OK\n");
			else
				printf("NA\n");
		}
	}

	return 0;
}