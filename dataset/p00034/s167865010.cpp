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


using namespace std;

int main()
{
	int l[10];
	int v1, v2;
	while (scanf(" ") != EOF)
	{
		for (int i = 0; i < 10; ++i)
			scanf("%d,", l+i);
		if (scanf("%d,%d", &v1, &v2) == EOF)
			break;

		int len = 0;
		for (int i = 0; i < 10; ++i)
			len += l[i];
		double across = (double)v1*len/(v1+v2);
		int t = 0;
		for (int i = 0; i < 10; ++i)
		{
			t += l[i];
			if (across <= t)
			{
				printf("%d\n", i+1);
				break;
			}
		}
	}

	return 0;
}