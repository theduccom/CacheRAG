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
	char* type[] = { "A", "B", "AB", "O" };
	int count[4];
	memset(count, 0, sizeof(count));
	int n;
	char buf[128];
	while (scanf("%d,%s\n", &n, buf) != EOF)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (strcmp(buf, type[i]) == 0)
			{
				++count[i];
				break;
			}
		}
	}
	for (int i = 0; i < 4; ++i)
		printf("%d\n", count[i]);

	return 0;
}