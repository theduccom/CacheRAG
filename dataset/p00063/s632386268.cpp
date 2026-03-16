#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <iostream>
#include <climits>
#include <cfloat>


using namespace std;

int main()
{
	char buf[101];
	int n = 0;
	while (scanf("%s\n", buf) != EOF)
	{
		bool f = true;
		for (int i = 0; i < strlen(buf)/2; ++i)
		{
			if (buf[i] != buf[strlen(buf)-1-i])
			{
				f = false;
				break;
			}
		}
		if (f)
			++n;
	}
	printf("%d\n", n);
	
	return 0;
}