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
	char buf[128];
	while (scanf("%s", buf) != EOF)
	{
		for (int i = 0; buf[i] != '\0'; ++i)
		{
			if (buf[i] == '@')
			{
				for (int j = 0; j < buf[i+1]-'0'; ++j)
					putchar(buf[i+2]);
				i += 2;
			}
			else
				putchar(buf[i]);
		}
		printf("\n");
	}

	return 0;
}