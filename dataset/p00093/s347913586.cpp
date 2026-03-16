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
	bool first = true;
	while (true)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;

		if (first)
			first = false;
		else
			printf("\n");

		bool notFound = true;
		for (int i = a; i <= b; ++i)
		{
			if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
			{
				printf("%d\n", i);
				notFound = false;
			}
		}
		if (notFound)
			puts("NA");
	}

	return 0;
}